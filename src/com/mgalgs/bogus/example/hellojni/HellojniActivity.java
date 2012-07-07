package com.mgalgs.bogus.example.hellojni;

import java.util.ArrayList;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.widget.ArrayAdapter;
import android.widget.Spinner;

public class HellojniActivity extends Activity {
	native ArrayList<String> getStrings(String ip);
	
	static {
		System.loadLibrary("hello_jni");
	}

	private ArrayAdapter<String> mExportsAdapter;
	
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        
		mExportsAdapter = new ArrayAdapter<String>(this,
				android.R.layout.simple_spinner_item);
		mExportsAdapter
				.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);

		Spinner spn = (Spinner) findViewById(R.id.spinner1);
		spn.setAdapter(mExportsAdapter);

		refreshExportsList();
    }
    
	private void refreshExportsList() {
		Log.i("Hellojni", "Refreshing exports list");
		mExportsAdapter.clear();
		ArrayList<String> exports = getStrings("10.0.2.2");
		if (exports == null) {
			Log.e("Hellojni", "STUFF WAS NULL");
			return;
		}
		for (String export : exports) {
			mExportsAdapter.add(export);
		}
	}
    
}
