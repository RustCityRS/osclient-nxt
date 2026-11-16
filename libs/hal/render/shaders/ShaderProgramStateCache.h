// libs/hal/render/shaders/ShaderProgramStateCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class ShaderProgramStateCache {
    public:
        class ShaderConstMapValue;
        ShaderProgramStateCache(const ShaderProgramStateCache& shaderProgramStateCache);
        void IsOwnerThread();
        uint8_t Initialise(const ShaderProgram& shaderProgram);
        void Clear();
        void ClearShaderConst(unsigned int arg1, unsigned int arg2);
        unsigned long SetConstData1(unsigned int arg1, const float* arg2);
        unsigned long SetConstData3(unsigned int arg1, const float* arg2);
        unsigned long SetConstData4(unsigned int arg1, const float* arg2);
        uint8_t SetConstData(unsigned int arg1, unsigned int arg2, const float* arg3, bool arg4);
        ShaderProgramStateCache();
        ~ShaderProgramStateCache();
        void SetShaderConstMatrix4(unsigned int arg1, unsigned int arg2, const math::Matrix44T<float>* matrix44);
        void SetShaderConstMatrix3(unsigned int arg1, unsigned int arg2, const math::Matrix33T<float>* matrix33);
        void SetShaderConstMatrix2(unsigned int arg1, unsigned int arg2, const math::Matrix22T<float>* matrix22);
        void SetShaderConstFloat4Array(unsigned int arg1, unsigned int arg2, const float* arg3);
        void SetShaderConstInt4Array(unsigned int arg1, unsigned int arg2, const int* arg3);
        void SetShaderConstFloat3Array(unsigned int arg1, unsigned int arg2, const float* arg3);
        void SetShaderConstInt3Array(unsigned int arg1, unsigned int arg2, const int* arg3);
        void SetShaderConstFloat2Array(unsigned int arg1, unsigned int arg2, const float* arg3);
        void SetShaderConstInt2Array(unsigned int arg1, unsigned int arg2, const int* arg3);
        void SetShaderConstFloat1Array(unsigned int arg1, unsigned int arg2, const float* arg3);
        void SetShaderConstInt1Array(unsigned int arg1, unsigned int arg2, const int* arg3);
        void SetShaderConstUInt1Array(unsigned int arg1, unsigned int arg2, const unsigned int* arg3);
        void SetShaderConstVector4(unsigned int arg1, const math::Vector4T<float>* vector4);
        void SetShaderConstVector3(unsigned int arg1, const math::Vector3T<float>* vector3);
        void SetShaderConstVector4(unsigned int arg1, unsigned int arg2, const math::Vector4T<float>* vector4);
        void SetShaderConstVector3(unsigned int arg1, unsigned int arg2, const math::Vector3T<float>* vector3);
        void SetShaderConstVector2(unsigned int arg1, unsigned int arg2, const math::Vector2T<float>* vector2);
        void SetShaderConstFloat4(unsigned int arg1, float arg2, float arg3, float arg4, float arg5);
        void SetShaderConstFloat3(unsigned int arg1, float arg2, float arg3, float arg4);
        void SetShaderConstFloat2(unsigned int arg1, float arg2, float arg3);
        void SetShaderConstFloat1(unsigned int arg1, float arg2);
        void SetShaderConstInt4(unsigned int arg1, int arg2, int arg3, int arg4, int arg5);
        void SetShaderConstInt3(unsigned int arg1, int arg2, int arg3, int arg4);
        void SetShaderConstInt2(unsigned int arg1, int arg2, int arg3);
        void SetShaderConstInt1(unsigned int arg1, int arg2);

    private:
        eastl* field_0;
        uint64_t field_8;
        uint8_t _unknown_16[16];
        vector_map<unsigned int, ShaderConstMapValue> field_32;
        uint8_t _unknown_33[7];
        ShaderProgram* field_40;
        uint8_t _unknown_48[64];
        uint8_t field_112;
    };

    class ShaderProgramStateCache::ShaderConstMapValue {
    public:
        void Reset();
        ShaderConstMapValue();

        uint8_t _unknown_0[1];
    };

    // 0x100bebdd0
    void ShaderProgramStateCache::IsOwnerThread() {
        this_thread::IsMainThread();
    }

    // 0x100bec0c0
    void ShaderProgramStateCache::ShaderConstMapValue::Reset() {
        unsigned long in_RSI;

        uint64_t* puVar1 = (uint64_t*)(*this)[in_RSI];
        *puVar1 = 15987178197214944733;
        puVar1[1] = 15987178197214944733;
        puVar1[2] = 15987178197214944733;
        puVar1[3] = 15987178197214944733;
        puVar1[4] = 15987178197214944733;
        puVar1[5] = 15987178197214944733;
        puVar1[6] = 15987178197214944733;
        puVar1[7] = 15987178197214944733;
    }

    // 0x100bf14b0
    void ShaderProgramStateCache::SetShaderConstMatrix3(unsigned int arg1, unsigned int arg2,
                                                        const math::Matrix33T<float>* matrix33) {
        Vector3T<float>* this_00 = (Vector3T<float>*)(*matrix33)[0];
        float* arg3 = (float*)(*this_00)[0];
        SetConstData(arg1, arg2 * 9, arg3, false);
    }

    // 0x100bf1550
    void ShaderProgramStateCache::SetShaderConstMatrix2(unsigned int arg1, unsigned int arg2,
                                                        const math::Matrix22T<float>* matrix22) {
        Vector2T<float>* this_00 = (Vector2T<float>*)(*matrix22)[0];
        float* arg3 = (float*)(*this_00)[0];
        SetConstData(arg1, arg2 << 2, arg3, false);
    }

    // 0x100bf15f0
    void ShaderProgramStateCache::SetShaderConstFloat4Array(unsigned int arg1, unsigned int arg2, const float* arg3) {
        SetConstData(arg1, arg2 << 2, arg3, false);
    }

    // 0x100bf16b0
    void ShaderProgramStateCache::SetShaderConstFloat3Array(unsigned int arg1, unsigned int arg2, const float* arg3) {
        SetConstData(arg1, arg2 * 3, arg3, false);
    }

    // 0x100bf16e0
    void ShaderProgramStateCache::SetShaderConstFloat2Array(unsigned int arg1, unsigned int arg2, const float* arg3) {
        SetConstData(arg1, arg2 * 2, arg3, true);
    }

    // 0x100bf1710
    void ShaderProgramStateCache::SetShaderConstFloat1Array(unsigned int arg1, unsigned int arg2, const float* arg3) {
        SetConstData(arg1, arg2, arg3, true);
    }

    // 0x100bf17d0
    void ShaderProgramStateCache::SetShaderConstVector4(unsigned int arg1, const math::Vector4T<float>* vector4) {
        float* arg2 = (float*)(*vector4)[0];
        SetConstData4(arg1, arg2);
    }

    // 0x100bf1810
    void ShaderProgramStateCache::SetShaderConstVector3(unsigned int arg1, const math::Vector3T<float>* vector3) {
        float* arg2 = (float*)(*vector3)[0];
        SetConstData3(arg1, arg2);
    }

    // 0x100bf1850
    void ShaderProgramStateCache::SetShaderConstVector4(unsigned int arg1, unsigned int arg2,
                                                        const math::Vector4T<float>* vector4) {
        float* arg3 = (float*)(*vector4)[0];
        SetConstData(arg1, arg2 << 2, arg3, false);
    }

    // 0x100bf18e0
    void ShaderProgramStateCache::SetShaderConstVector3(unsigned int arg1, unsigned int arg2,
                                                        const math::Vector3T<float>* vector3) {
        float* arg3 = (float*)(*vector3)[0];
        SetConstData(arg1, arg2 * 3, arg3, false);
    }

    // 0x100bf1970
    void ShaderProgramStateCache::SetShaderConstVector2(unsigned int arg1, unsigned int arg2,
                                                        const math::Vector2T<float>* vector2) {
        float* arg3 = (float*)(*vector2)[0];
        SetConstData(arg1, arg2 * 2, arg3, true);
    }

    // 0x100bf1a00
    void ShaderProgramStateCache::SetShaderConstFloat4(unsigned int arg1, float arg2, float arg3, float arg4,
                                                       float arg5) {
        ImVec4 local_38(arg2, arg3, arg4, arg5);
        float* arg2_00 = &local_38[0];
        SetConstData4(arg1, arg2_00);
    }

    // 0x100bf1a60
    void ShaderProgramStateCache::SetShaderConstFloat3(unsigned int arg1, float arg2, float arg3, float arg4) {
        ColourHSL local_38(arg2, arg3, arg4);
        float* arg2_00 = &local_38[0];
        SetConstData3(arg1, arg2_00);
    }

    // 0x100bf1ac0
    void ShaderProgramStateCache::SetShaderConstFloat2(unsigned int arg1, float arg2, float arg3) {
        Point<float> local_28(arg2, arg3);
        float* arg3_00 = &local_28[0];
        SetConstData(arg1, 2, arg3_00, false);
    }

    // 0x100bf1b20
    void ShaderProgramStateCache::SetShaderConstFloat1(unsigned int arg1, float arg2) {
        float local_c = arg2;
        SetConstData1(arg1, &local_c);
    }

    // 0x100bf1b50
    void ShaderProgramStateCache::SetShaderConstInt4(unsigned int arg1, int arg2, int arg3, int arg4, int arg5) {
        ImVec4 local_38((float)arg2, (float)arg3, (float)arg4, (float)arg5);
        float* arg2_00 = &local_38[0];
        SetConstData4(arg1, arg2_00);
    }

    // 0x100bf1bc0
    void ShaderProgramStateCache::SetShaderConstInt3(unsigned int arg1, int arg2, int arg3, int arg4) {
        ColourHSL local_38((float)arg2, (float)arg3, (float)arg4);
        float* arg2_00 = &local_38[0];
        SetConstData3(arg1, arg2_00);
    }

    // 0x100bf1c20
    void ShaderProgramStateCache::SetShaderConstInt2(unsigned int arg1, int arg2, int arg3) {
        Point<float> local_28((float)arg2, (float)arg3);
        float* arg3_00 = &local_28[0];
        SetConstData(arg1, 2, arg3_00, false);
    }

    // 0x100bf1df0
    void ShaderProgramStateCache::SetShaderConstInt1(unsigned int arg1, int arg2) {
        float local_c = (float)arg2;
        SetConstData1(arg1, &local_c);
    }

    // 0x100bf8290
    ShaderProgramStateCache::ShaderProgramStateCache()
        : eastl::vector_map<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>(), field_40(nullptr),
          field_112(0) {}

    // 0x100bf8320
    ShaderProgramStateCache::~ShaderProgramStateCache() {
        (&field_48)->~mutex();
    }

    // 0x100c00100
    ShaderProgramStateCache::ShaderConstMapValue::ShaderConstMapValue() {
        Reset();
    }

} // namespace jag::render
