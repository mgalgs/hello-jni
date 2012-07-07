#include <stdlib.h>
#include <jni.h>

jobject ju_NewArrayList(JNIEnv *env)
{
    jclass arrayClass = (*env)->FindClass(env, "java/util/ArrayList");
    if (arrayClass == NULL) return NULL;

    jmethodID mid_init =  (*env)->GetMethodID(env, arrayClass, "<init>",
                                              "()V");
    if (mid_init == NULL) return NULL;

    return (*env)->NewObject(env, arrayClass, mid_init);
}

jobject ju_ArrayList_mid_add(JNIEnv *env)
{
    jclass arrayClass = (*env)->FindClass(env, "java/util/ArrayList");
    if (arrayClass == NULL) return NULL;

    return (*env)->GetMethodID(env, arrayClass, "add",
                               "(Ljava/lang/Object;)Z");

}
