/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_mit_csail_uid_EventManager */

#ifndef _Included_edu_mit_csail_uid_EventManager
#define _Included_edu_mit_csail_uid_EventManager
#ifdef __cplusplus
extern "C" {
#endif
#undef edu_mit_csail_uid_EventManager_APPEAR
#define edu_mit_csail_uid_EventManager_APPEAR 0L
#undef edu_mit_csail_uid_EventManager_VANISH
#define edu_mit_csail_uid_EventManager_VANISH 1L
#undef edu_mit_csail_uid_EventManager_CHANGE
#define edu_mit_csail_uid_EventManager_CHANGE 2L
/*
 * Class:     edu_mit_csail_uid_EventManager
 * Method:    createEventManager
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_edu_mit_csail_uid_EventManager_createEventManager
  (JNIEnv *, jobject);

/*
 * Class:     edu_mit_csail_uid_EventManager
 * Method:    destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_edu_mit_csail_uid_EventManager_destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     edu_mit_csail_uid_EventManager
 * Method:    addObserver
 * Signature: (JILjava/lang/String;FIIIII)V
 */
JNIEXPORT void JNICALL Java_edu_mit_csail_uid_EventManager_addObserver
  (JNIEnv *, jobject, jlong, jint, jstring, jfloat, jint, jint, jint, jint, jint);

/*
 * Class:     edu_mit_csail_uid_EventManager
 * Method:    _update
 * Signature: (J[BII)[Ledu/mit/csail/uid/SikuliEvent;
 */
JNIEXPORT jobjectArray JNICALL Java_edu_mit_csail_uid_EventManager__1update
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
