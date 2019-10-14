#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_ga_com_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    std:: uint64_t b = 43;
    int64_t c=43;
    //__uint128_t a = 96;
    return env->NewStringUTF(hello.c_str());
}
