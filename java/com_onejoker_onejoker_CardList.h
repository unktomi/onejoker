/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_onejoker_onejoker_CardList */

#ifndef _Included_com_onejoker_onejoker_CardList
#define _Included_com_onejoker_onejoker_CardList
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nStructSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_onejoker_onejoker_CardList_nStructSize
  (JNIEnv *, jclass);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nLengthOff
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_onejoker_onejoker_CardList_nLengthOff
  (JNIEnv *, jclass);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nAppend
 * Signature: (Ljava/nio/ByteBuffer;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onejoker_onejoker_CardList_nAppend
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nDelete
 * Signature: (Ljava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_com_onejoker_onejoker_CardList_nDelete
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nEquals
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onejoker_onejoker_CardList_nEquals
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nExtend
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onejoker_onejoker_CardList_nExtend
  (JNIEnv *, jclass, jobject, jobject, jint);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nFill
 * Signature: (Ljava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_com_onejoker_onejoker_CardList_nFill
  (JNIEnv *, jclass, jobject, jint, jint);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nFNVHash
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_onejoker_onejoker_CardList_nFNVHash
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nIndex
 * Signature: (Ljava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_com_onejoker_onejoker_CardList_nIndex
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nNew
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_onejoker_onejoker_CardList_nNew
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nPop
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_onejoker_onejoker_CardList_nPop
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nRemove
 * Signature: (Ljava/nio/ByteBuffer;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onejoker_onejoker_CardList_nRemove
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nReverse
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_onejoker_onejoker_CardList_nReverse
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nShuffle
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_onejoker_onejoker_CardList_nShuffle
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_onejoker_onejoker_CardList
 * Method:    nSort
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_onejoker_onejoker_CardList_nSort
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
