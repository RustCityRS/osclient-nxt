// libs/hal/render/shaders/ShaderProgramStateCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class ShaderProgramStateCache {
    public:
        class ShaderConstMapValue;
        ShaderProgramStateCache(ShaderProgramStateCache const&);
        void IsOwnerThread();
        Initialise(ShaderProgram const&);
        void Clear();
        void ClearShaderConst(unsigned int, unsigned int);
        ulong SetConstData1(unsigned int, float const*);
        ulong SetConstData3(unsigned int, float const*);
        ulong SetConstData4(unsigned int, float const*);
        byte SetConstData(unsigned int, unsigned int, float const*, bool);
        ShaderProgramStateCache();
        ~ShaderProgramStateCache();
        void SetShaderConstMatrix4(unsigned int, unsigned int, math::Matrix44T<float> const*);
        void SetShaderConstMatrix3(unsigned int, unsigned int, math::Matrix33T<float> const*);
        void SetShaderConstMatrix2(unsigned int, unsigned int, math::Matrix22T<float> const*);
        SetShaderConstFloat4Array(unsigned int, unsigned int, float const*);
        void SetShaderConstInt4Array(unsigned int, unsigned int, int const*);
        SetShaderConstFloat3Array(unsigned int, unsigned int, float const*);
        void SetShaderConstInt3Array(unsigned int, unsigned int, int const*);
        SetShaderConstFloat2Array(unsigned int, unsigned int, float const*);
        void SetShaderConstInt2Array(unsigned int, unsigned int, int const*);
        SetShaderConstFloat1Array(unsigned int, unsigned int, float const*);
        void SetShaderConstInt1Array(unsigned int, unsigned int, int const*);
        SetShaderConstUInt1Array(unsigned int, unsigned int, unsigned int const*);
        void SetShaderConstVector4(unsigned int, math::Vector4T<float> const*);
        void SetShaderConstVector3(unsigned int, math::Vector3T<float> const*);
        void SetShaderConstVector4(unsigned int, unsigned int, math::Vector4T<float> const*);
        void SetShaderConstVector3(unsigned int, unsigned int, math::Vector3T<float> const*);
        void SetShaderConstVector2(unsigned int, unsigned int, math::Vector2T<float> const*);
        void SetShaderConstFloat4(unsigned int, float, float, float, float);
        void SetShaderConstFloat3(unsigned int, float, float, float);
        void SetShaderConstFloat2(unsigned int, float, float);
        void SetShaderConstFloat1(unsigned int, float);
        void SetShaderConstInt4(unsigned int, int, int, int, int);
        void SetShaderConstInt3(unsigned int, int, int, int);
        void SetShaderConstInt2(unsigned int, int, int);
        void SetShaderConstInt1(unsigned int, int);

        // data members, from how the methods use this: 113 bytes
        char _unknown_0[32];
        vector_map field_32; // offset 32
        char _unknown_33[7];
        ShaderProgram* field_40; // offset 40
        char _unknown_48[64];
        byte field_112; // offset 112
    };

    class ShaderProgramStateCache::ShaderConstMapValue {
    public:
        void Reset();
        ShaderConstMapValue();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100bebdd0, 16 bytes, inline, placed by class name and debug map
    // ShaderProgramStateCache::IsOwnerThread()
    void ShaderProgramStateCache::IsOwnerThread() {
        this_thread::IsMainThread();
    }

    // 0x100bec0c0, 48 bytes, inline, placed by class name and debug map
    // ShaderProgramStateCache::ShaderConstMapValue::Reset()
    void ShaderProgramStateCache::ShaderConstMapValue::Reset() {
        undefined8* puVar1;

        puVar1 = (undefined8*)std::array<float, 16ul>::operator[]((ulong)this);
        *puVar1 = 15987178197214944733;
        puVar1[1] = 15987178197214944733;
        puVar1[2] = 15987178197214944733;
        puVar1[3] = 15987178197214944733;
        puVar1[4] = 15987178197214944733;
        puVar1[5] = 15987178197214944733;
        puVar1[6] = 15987178197214944733;
        puVar1[7] = 15987178197214944733;
    }

    // 0x100bee750, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgramStateCache::ShaderProgramStateCache(): jumps straight to the base-object constructor

    // 0x100bee7e0, 16 bytes, complete-object destructor, inline, placed by class name
    // ShaderProgramStateCache::~ShaderProgramStateCache(): jumps straight to the base-object destructor

    // 0x100bf14b0, 80 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstMatrix3(unsigned int, unsigned int, math::Matrix33T<float> const*)
    void ShaderProgramStateCache::SetShaderConstMatrix3(uint param_1, uint param_2, Matrix33T* param_3) {
        Vector3T<float>* this_00;
        float* pfVar1;

        this_00 = (Vector3T<float>*)math::Matrix33T<float>::operator[]((Matrix33T<float>*)param_3, 0);
        pfVar1 = (float*)math::Vector3T<float>::operator[](this_00, 0);
        SetConstData(this, param_1, param_2 * 9, pfVar1, false);
    }

    // 0x100bf1550, 80 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstMatrix2(unsigned int, unsigned int, math::Matrix22T<float> const*)
    void ShaderProgramStateCache::SetShaderConstMatrix2(uint param_1, uint param_2, Matrix22T* param_3) {
        Vector2T<float>* this_00;
        float* pfVar1;

        this_00 = (Vector2T<float>*)math::Matrix22T<float>::operator[]((Matrix22T<float>*)param_3, 0);
        pfVar1 = (float*)math::Vector2T<float>::operator[](this_00, 0);
        SetConstData(this, param_1, param_2 << 2, pfVar1, false);
    }

    // 0x100bf15f0, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ShaderProgramStateCache::SetShaderConstFloat4Array(unsigned int, unsigned int, float const*)
    /* ShaderProgramStateCache::SetShaderConstInt4Array(unsigned int, unsigned int, int
   const*) */

    void ShaderProgramStateCache::SetShaderConstInt4Array(uint param_1, uint param_2, int* param_3) {
        SetConstData(this, param_1, param_2 << 2, (float*)param_3, false);
    }

    // 0x100bf16b0, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ShaderProgramStateCache::SetShaderConstFloat3Array(unsigned int, unsigned int, float const*)
    /* ShaderProgramStateCache::SetShaderConstInt3Array(unsigned int, unsigned int, int
   const*) */

    void ShaderProgramStateCache::SetShaderConstInt3Array(uint param_1, uint param_2, int* param_3) {
        SetConstData(this, param_1, param_2 * 3, (float*)param_3, false);
    }

    // 0x100bf16e0, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ShaderProgramStateCache::SetShaderConstFloat2Array(unsigned int, unsigned int, float const*)
    /* ShaderProgramStateCache::SetShaderConstInt2Array(unsigned int, unsigned int, int
   const*) */

    void ShaderProgramStateCache::SetShaderConstInt2Array(uint param_1, uint param_2, int* param_3) {
        SetConstData(this, param_1, param_2 * 2, (float*)param_3, true);
    }

    // 0x100bf1710, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ShaderProgramStateCache::SetShaderConstFloat1Array(unsigned int, unsigned int, float const*)
    /* ShaderProgramStateCache::SetShaderConstInt1Array(unsigned int, unsigned int, int
   const*) */

    void ShaderProgramStateCache::SetShaderConstInt1Array(uint param_1, uint param_2, int* param_3) {
        SetConstData(this, param_1, param_2, (float*)param_3, true);
    }

    // 0x100bf17d0, 48 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstVector4(unsigned int, math::Vector4T<float> const*)
    void ShaderProgramStateCache::SetShaderConstVector4(uint param_1, Vector4T* param_2) {
        float* pfVar1;

        pfVar1 = (float*)math::Vector4T<float>::operator[]((Vector4T<float>*)param_2, 0);
        SetConstData4(this, param_1, pfVar1);
    }

    // 0x100bf1810, 48 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstVector3(unsigned int, math::Vector3T<float> const*)
    void ShaderProgramStateCache::SetShaderConstVector3(uint param_1, Vector3T* param_2) {
        float* pfVar1;

        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_2, 0);
        SetConstData3(this, param_1, pfVar1);
    }

    // 0x100bf1850, 64 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstVector4(unsigned int, unsigned int, math::Vector4T<float> const*)
    void ShaderProgramStateCache::SetShaderConstVector4(uint param_1, uint param_2, Vector4T* param_3) {
        float* pfVar1;

        pfVar1 = (float*)math::Vector4T<float>::operator[]((Vector4T<float>*)param_3, 0);
        SetConstData(this, param_1, param_2 << 2, pfVar1, false);
    }

    // 0x100bf18e0, 64 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstVector3(unsigned int, unsigned int, math::Vector3T<float> const*)
    void ShaderProgramStateCache::SetShaderConstVector3(uint param_1, uint param_2, Vector3T* param_3) {
        float* pfVar1;

        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_3, 0);
        SetConstData(this, param_1, param_2 * 3, pfVar1, false);
    }

    // 0x100bf1970, 64 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstVector2(unsigned int, unsigned int, math::Vector2T<float> const*)
    void ShaderProgramStateCache::SetShaderConstVector2(uint param_1, uint param_2, Vector2T* param_3) {
        float* pfVar1;

        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)param_3, 0);
        SetConstData(this, param_1, param_2 * 2, pfVar1, true);
    }

    // 0x100bf1a00, 80 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstFloat4(unsigned int, float, float, float, float)
    void ShaderProgramStateCache::SetShaderConstFloat4(uint param_1, float param_2, float param_3, float param_4,
                                                       float param_5) {
        float* pfVar1;
        ImVec4 local_38[24];

        ImVec4::ImVec4(local_38, param_2, param_3, param_4, param_5);
        pfVar1 = (float*)math::Vector4T<float>::operator[]((Vector4T<float>*)local_38, 0);
        SetConstData4(this, param_1, pfVar1);
    }

    // 0x100bf1a60, 80 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstFloat3(unsigned int, float, float, float)
    void ShaderProgramStateCache::SetShaderConstFloat3(uint param_1, float param_2, float param_3, float param_4) {
        float* pfVar1;
        ColourHSL local_38;

        new (&local_38) math::ColourHSL(param_2, param_3, param_4);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_38, 0);
        SetConstData3(this, param_1, pfVar1);
    }

    // 0x100bf1ac0, 80 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstFloat2(unsigned int, float, float)
    void ShaderProgramStateCache::SetShaderConstFloat2(uint param_1, float param_2, float param_3) {
        float* pfVar1;
        Point<float> local_28[8];

        math::Point<float>::Point(local_28, param_2, param_3);
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_28, 0);
        SetConstData(this, param_1, 2, pfVar1, false);
    }

    // 0x100bf1b20, 32 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstFloat1(unsigned int, float)
    void ShaderProgramStateCache::SetShaderConstFloat1(uint param_1, float param_2) {
        float local_c;

        local_c = param_2;
        SetConstData1(this, param_1, &local_c);
    }

    // 0x100bf1b50, 96 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstInt4(unsigned int, int, int, int, int)
    void ShaderProgramStateCache::SetShaderConstInt4(uint param_1, int param_2, int param_3, int param_4, int param_5) {
        float* pfVar1;
        ImVec4 local_38[24];

        ImVec4::ImVec4(local_38, (float)param_2, (float)param_3, (float)param_4, (float)param_5);
        pfVar1 = (float*)math::Vector4T<float>::operator[]((Vector4T<float>*)local_38, 0);
        SetConstData4(this, param_1, pfVar1);
    }

    // 0x100bf1bc0, 80 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstInt3(unsigned int, int, int, int)
    void ShaderProgramStateCache::SetShaderConstInt3(uint param_1, int param_2, int param_3, int param_4) {
        float* pfVar1;
        ColourHSL local_38;

        new (&local_38) math::ColourHSL((float)param_2, (float)param_3, (float)param_4);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_38, 0);
        SetConstData3(this, param_1, pfVar1);
    }

    // 0x100bf1c20, 80 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstInt2(unsigned int, int, int)
    void ShaderProgramStateCache::SetShaderConstInt2(uint param_1, int param_2, int param_3) {
        float* pfVar1;
        Point<float> local_28[8];

        math::Point<float>::Point(local_28, (float)param_2, (float)param_3);
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_28, 0);
        SetConstData(this, param_1, 2, pfVar1, false);
    }

    // 0x100bf1df0, 32 bytes, inline, placed by class name
    // ShaderProgramStateCache::SetShaderConstInt1(unsigned int, int)
    void ShaderProgramStateCache::SetShaderConstInt1(uint param_1, int param_2) {
        float local_c;

        local_c = (float)param_2;
        SetConstData1(this, param_1, &local_c);
    }

    // 0x100bf8290, 48 bytes, base-object constructor, inline, placed by class name
    // ShaderProgramStateCache::ShaderProgramStateCache()
    void ShaderProgramStateCache::ShaderProgramStateCache() {
        new (this) eastl::vector_map<
            unsigned int, ShaderProgramStateCache::ShaderConstMapValue, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, ShaderProgramStateCache::ShaderConstMapValue>, eastl::allocator>>();
        field_40 = (ShaderProgram*)0;
        new (&field_48) std::mutex();
        field_112 = 0;
    }

    // 0x100bf8320, 48 bytes, base-object destructor, inline, placed by class name
    // ShaderProgramStateCache::~ShaderProgramStateCache()
    void ShaderProgramStateCache::~ShaderProgramStateCache() {
        (&field_48)->~mutex();
        ~vector_map();
    }

    // 0x100bffaa0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgramStateCache::ShaderConstMapValue::ShaderConstMapValue(): jumps straight to the base-object constructor

    // 0x100c00100, 16 bytes, base-object constructor, inline, placed by class name
    // ShaderProgramStateCache::ShaderConstMapValue::ShaderConstMapValue()
    void ShaderProgramStateCache::ShaderConstMapValue::ShaderConstMapValue() {
        Reset(this);
    }

} // namespace jag::render
