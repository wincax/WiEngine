/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint */

#ifndef _Included_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
#define _Included_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_LIMIT_STATE_INACTIVE
#define com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_LIMIT_STATE_INACTIVE 0L
#undef com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_LIMIT_STATE_AT_LOWER
#define com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_LIMIT_STATE_AT_LOWER 1L
#undef com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_LIMIT_STATE_AT_UPPER
#define com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_LIMIT_STATE_AT_UPPER 2L
#undef com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_LIMIT_STATE_EQUAL
#define com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_LIMIT_STATE_EQUAL 3L
/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    nativeGetLocalAnchorA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_nativeGetLocalAnchorA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    nativeGetLocalAnchorB
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_nativeGetLocalAnchorB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    getReferenceAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_getReferenceAngle
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    isMotorEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_isMotorEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    enableMotor
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_enableMotor
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    getJointAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_getJointAngle
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    getJointSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_getJointSpeed
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    isLimitEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_isLimitEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    enableLimit
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_enableLimit
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    getLowerLimit
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_getLowerLimit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    getUpperLimit
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_getUpperLimit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    setLimits
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_setLimits
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    setMotorSpeed
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_setMotorSpeed
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    getMotorSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_getMotorSpeed
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    setMaxMotorTorque
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_setMaxMotorTorque
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    getMaxMotorTorque
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_getMaxMotorTorque
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint
 * Method:    getMotorTorque
 * Signature: (F)F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RevoluteJoint_getMotorTorque
  (JNIEnv *, jobject, jfloat);

#ifdef __cplusplus
}
#endif
#endif
