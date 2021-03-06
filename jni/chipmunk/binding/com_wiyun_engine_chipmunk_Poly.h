/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_chipmunk_Poly */

#ifndef _Included_com_wiyun_engine_chipmunk_Poly
#define _Included_com_wiyun_engine_chipmunk_Poly
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_chipmunk_Poly
 * Method:    init
 * Signature: (Lcom/wiyun/engine/chipmunk/Body;[Lcom/wiyun/engine/types/WYPoint;Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Poly_init
  (JNIEnv *, jobject, jobject, jobjectArray, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Poly
 * Method:    setVertices
 * Signature: ([Lcom/wiyun/engine/types/WYPoint;Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Poly_setVertices
  (JNIEnv *, jobject, jobjectArray, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Poly
 * Method:    getVertexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_chipmunk_Poly_getVertexCount
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Poly
 * Method:    getVertices
 * Signature: ([Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_Poly_getVertices
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     com_wiyun_engine_chipmunk_Poly
 * Method:    getOffsetX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_Poly_getOffsetX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Poly
 * Method:    getOffsetY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_Poly_getOffsetY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Poly
 * Method:    getOriginWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_Poly_getOriginWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_Poly
 * Method:    getOriginHeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_Poly_getOriginHeight
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
