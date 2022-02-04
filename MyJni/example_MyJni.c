/*
 * example_MyJni.c
 *
 */
#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL Java_example_MyJni_answer
  (JNIEnv * env, jobject class_object, jstring jstr){
	const char *cstr = (*env)->GetStringUTFChars(env, jstr, NULL);
	char return_messge[100] = "Hello ";
	  strcat(return_messge, cstr);
	  (*env)->ReleaseStringUTFChars(env, jstr, cstr);
	  jstring result = (*env)->NewStringUTF(env, return_messge);
     return result;
}


