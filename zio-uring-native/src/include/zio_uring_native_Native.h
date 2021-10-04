/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class zio_uring_native_Native */

#ifndef _Included_zio_uring_native_Native
#define _Included_zio_uring_native_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:      zio_uring_native_Native
 * Method:     initQueue
 * Signature:  (I)J
 */
JNIEXPORT jlong JNICALL Java_zio_uring_native_Native_initQueue
  (JNIEnv *, jobject, jint);

/*
 * Class:      zio_uring_native_Native
 * Method:     destroyQueue
 * Signature:  (J)V
 */
JNIEXPORT void JNICALL Java_zio_uring_native_Native_destroyQueue
  (JNIEnv *, jobject, jlong);

/*
 * Class:      zio_uring_native_Native
 * Method:     read
 * Signature:  (JJIJJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_zio_uring_native_Native_read
  (JNIEnv *, jobject, jlong, jlong, jint, jlong, jlong);

/*
 * Class:      zio_uring_native_Native
 * Method:     write
 * Signature:  (JJIJ[B)V
 */
JNIEXPORT void JNICALL Java_zio_uring_native_Native_write
  (JNIEnv *, jobject, jlong, jlong, jint, jlong, jbyteArray);

/*
 * Class:      zio_uring_native_Native
 * Method:     submit
 * Signature:  (J)V
 */
JNIEXPORT void JNICALL Java_zio_uring_native_Native_submit
  (JNIEnv *, jobject, jlong);

/*
 * Class:      zio_uring_native_Native
 * Method:     peek
 * Signature:  (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_zio_uring_native_Native_peek
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:      zio_uring_native_Native
 * Method:     await
 * Signature:  (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_zio_uring_native_Native_await
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:      zio_uring_native_Native
 * Method:     openFile
 * Signature:  (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_zio_uring_native_Native_openFile
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
