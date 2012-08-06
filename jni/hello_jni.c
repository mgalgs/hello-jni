/* #include <stdlib.h> */
/* #include <stdio.h> */
#include <jni.h>

/* #include "jni-util.h" */
/* #include "alog.h" */
#include "com_mgalgs_bogus_example_hellojni_HellojniActivity.h"

/* char messages[][60] = { */
/*     "i'd like a bike", */
/*     "yes i'd like a bike", */
/*     "double your sentiment", */
/*     "your doublemint", */
/*     "double your moments of fun", */
/*     "double your delightment", */
/*     "with the right mint", */
/*     "for refreshment it's the only one", */
/*     "double your pleasure, double your fun", */
/*     "that's the statement of the great mint", */
/*     "in double mint gum", */
/*     "with the correct mint", */
/* }; */

JNIEXPORT jobject JNICALL Java_com_mgalgs_bogus_example_hellojni_HellojniActivity_getStrings
  (JNIEnv *env, jobject self, jstring ip)
{
    /* LOGE("hilo there"); */
    const char *s = (*env)->GetStringUTFChars(env, ip, 0);
    return 0;
}
    /* jobject objArr = ju_NewArrayList(env); */
    /* jmethodID mid_add = ju_ArrayList_mid_add(env); */
    /* if (mid_add == NULL) return NULL; */

    /* s =  */
    /* if (s == NULL) return NULL; */

    /* tmp = (*env)->NewStringUTF(env, s); */
    /* if (JNI_FALSE == (*env)->CallBooleanMethod(env, objArr, mid_add, s)) */
    /*     return NULL; */

    /* for (i=0; i < 10; ++i) { */
    /*     jstring s = (*env)->NewStringUTF(env, messages[i]); */
    /*     if (JNI_FALSE == (*env)->CallBooleanMethod(env, objArr, mid_add, s)) */
    /*         return NULL; */
    /* } */

    /* (*env)->ReleaseStringUTFChars(env, ip, s); */

    /* return objArr; */
    /* return NULL; */
/* } */
