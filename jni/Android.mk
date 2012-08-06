# rebuild stuff with:
# /home/mgalgs/src/android-ndk-r8/ndk-build NDK_DEBUG=1
# debug with:
# o set a breakpoint in java
# o start debugging java app
# o cd $PROJECT
# o $NDK/ndk-gdb
# o set a breakpoint in c
# o continue in c
# o continue in java

do-build:
	$(NDK)/ndk-build NDK_DEBUG=1

do-clean:
	$(NDK)/ndk-build clean

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE			:= hello_jni
# LOCAL_SRC_FILES			:= hello_jni.c jni-util.c
LOCAL_SRC_FILES			:= hello_jni.c
# LOCAL_LDLIBS			:= -L$(SYSROOT)/usr/lib -llog
# LOCAL_C_INCLUDES

include $(BUILD_SHARED_LIBRARY)

headers:
	@cd ../src/com/mgalgs/bogus/example/hellojni/; \
		javah -jni -d ../../../../../../jni/ -classpath ../../../../../ com.mgalgs.bogus.example.hellojni.HellojniActivity
