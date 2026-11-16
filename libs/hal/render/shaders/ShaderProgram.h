// libs/hal/render/shaders/ShaderProgram.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class ShaderProgram {
    public:
        // virtual methods in vtable order
        virtual ~ShaderProgram();
        virtual void OnEndFrame();
        GetVertexDecl() const;
        GetPixelShaderSource() const;
        GetComputeShaderSource() const;
        GetVertexShaderSource() const;
        float GetLastUsedTimeSeconds() const;
        void SetName(char const*);
        void CreateFromSourceString(char const*, char const*, VertexElementDesc const*, unsigned int, unsigned char);
        void Destroy();
        uint GetNativeShaderProgram() const;
        void GetConstIndex(HashedString const&) const;
        void SetShaderConstVector4(HashedString const&, unsigned int, math::Vector4T<float> const*, unsigned int) const;
        ShaderProgram(char const*);
        GetStorageBufferIndex(HashedString const&) const;
        void SetShaderConstMatrix4(HashedString const&, unsigned int, math::Matrix44T<float> const*,
                                   unsigned int) const;
        GetUniformLocationIndex(HashedString const&) const;
        void SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const;
        void SetShaderConstMatrix3(HashedString const&, unsigned int, math::Matrix33T<float> const*,
                                   unsigned int) const;
        void SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const;
        void SetShaderConstMatrix2(HashedString const&, unsigned int, math::Matrix22T<float> const*,
                                   unsigned int) const;
        void SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const;
        void SetShaderConstFloat4Array(HashedString const&, unsigned int, float const*, unsigned int) const;
        void SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const;
        void SetShaderConstUint4Array(HashedString const&, unsigned int, unsigned int const*, unsigned int) const;
        void SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const;
        void SetShaderConstFloat3Array(HashedString const&, unsigned int, float const*) const;
        void SetShaderConstFloat3Array(int, unsigned int, float const*) const;
        void SetShaderConstFloat2Array(HashedString const&, unsigned int, float const*) const;
        void SetShaderConstFloat2Array(int, unsigned int, float const*) const;
        void SetShaderConstFloat1Array(HashedString const&, unsigned int, float const*, unsigned int) const;
        void SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const;
        void SetShaderConstInt4Array(HashedString const&, unsigned int, int const*) const;
        void SetShaderConstInt4Array(int, unsigned int, int const*) const;
        void SetShaderConstInt3Array(HashedString const&, unsigned int, int const*) const;
        void SetShaderConstInt3Array(int, unsigned int, int const*) const;
        void SetShaderConstInt2Array(HashedString const&, unsigned int, int const*) const;
        void SetShaderConstInt2Array(int, unsigned int, int const*) const;
        void SetShaderConstInt1Array(HashedString const&, unsigned int, int const*) const;
        void SetShaderConstInt1Array(int, unsigned int, int const*) const;
        void SetShaderConstUInt1Array(HashedString const&, unsigned int, unsigned int const*, unsigned int) const;
        void SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const;
        void SetShaderConstVector4(HashedString const&, math::Vector4T<float> const*) const;
        void SetShaderConstVector4(int, math::Vector4T<float> const*) const;
        void SetShaderConstVector3(HashedString const&, math::Vector3T<float> const*) const;
        void SetShaderConstVector3(int, math::Vector3T<float> const*) const;
        void SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const;
        void SetShaderConstVector3(HashedString const&, unsigned int, math::Vector3T<float> const*) const;
        void SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const;
        void SetShaderConstVector2(HashedString const&, unsigned int, math::Vector2T<float> const*) const;
        void SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const;
        void SetShaderConstVector2(HashedString const&, math::Vector2T<float> const*) const;
        void SetShaderConstFloat4(HashedString const&, float, float, float, float) const;
        void SetShaderConstFloat4(int, float, float, float, float) const;
        void SetShaderConstFloat3(HashedString const&, float, float, float) const;
        void SetShaderConstFloat3(int, float, float, float) const;
        void SetShaderConstFloat2(HashedString const&, float, float) const;
        void SetShaderConstFloat2(int, float, float) const;
        void SetShaderConstFloat1(HashedString const&, float) const;
        void SetShaderConstFloat1(int, float) const;
        void SetShaderConstInt4(HashedString const&, int, int, int, int) const;
        void SetShaderConstInt4(int, int, int, int, int) const;
        void SetShaderConstInt3(HashedString const&, int, int, int) const;
        void SetShaderConstInt3(int, int, int, int) const;
        void SetShaderConstInt2(HashedString const&, int, int) const;
        void SetShaderConstInt2(int, int, int) const;
        void SetShaderConstInt1(HashedString const&, int) const;
        void SetShaderConstInt1(int, int) const;
        void SetProgramActive() const;
        void SetProgramActive(RenderContext&) const;
        void WaitForAsyncCompile() const;
        void CreateFromSourceString(char const*, unsigned char);
        void HasVertexShader() const;
        void HasPixelShader() const;
        void HasComputeShader() const;
        uchar GetCompileFlags() const;
        CreateFromSourceString();
        void CreateFromSourceString(char const*, char const*, VertexDeclaration const*, unsigned char);
        void RebuildFromInternalSource();
        CreateFromBinary();
        void DestroyBinary();
        ulong CreateFromSourceStringInternal();
        void LinkShaderAsync();
        void LinkShader();
        void PostLinkShader();
        void BindVertexElementAttribs(VertexElementDesc const*, unsigned int);
        void RetrieveShaderBinary();
        bool CreateShaderInternal(char const*, char const*, char const*);
        void ReleaseNativeResources();
        void BindConstBufferSlot(unsigned int, HashedString const&, unsigned int) const;
        GetConstBlockIndex(HashedString const&) const;
        GetConstBlockSize(HashedString const&) const;
        void SetShaderConstSampler(int, int) const;
        GetUniformBindingIndex(HashedString const&) const;
        bool IsReady() const;
        void PreRender();
        bool IsReadyGL() const;
        void SetLastUsedTimeSeconds(float) const;

        // data members, from how the methods use this: 1856 bytes
        undefined** field_0;            // offset 0, vtable pointer
        RenderDeviceOnEndFrame field_8; // offset 8
        char _unknown_9[111];
        undefined1 field_120; // offset 120
        char _unknown_121[39];
        shared_ptr field_160; // offset 160
        undefined1 field_176; // offset 176
        char _unknown_177[39];
        shared_ptr field_216; // offset 216
        char _unknown_232[40];
        shared_ptr field_272; // offset 272
        undefined1 field_288; // offset 288
        char _unknown_289[31];
        undefined1 field_320; // offset 320
        char _unknown_321[3];
        undefined1 field_324; // offset 324
        char _unknown_325[3];
        int field_328;               // offset 328
        float m_lastUsedTimeSeconds; // offset 332
        char _unknown_336[32];
        uchar m_compileFlags; // offset 368
        undefined1 field_369; // offset 369
        char _unknown_370[126];
        undefined1 field_496; // offset 496
        char _unknown_497[1335];
        uint m_nativeShaderProgram; // offset 1832
        int field_1836;             // offset 1836
        char _unknown_1840[16];
    };

    // 0x100892520, 16 bytes, inline, placed by class name and debug map
    // ShaderProgram::GetLastUsedTimeSeconds() const
    float ShaderProgram::GetLastUsedTimeSeconds() {
        return m_lastUsedTimeSeconds;
    }

    // 0x100bc28a0, 32 bytes, inline, placed by class name
    // ShaderProgram::SetName(char const*)
    void ShaderProgram::SetName(char* param_1) {
        (&field_336, param_1)->assign();
    }

    // 0x100bdf660, 16 bytes, inline, placed by class name and debug map
    // ShaderProgram::GetConstIndex(HashedString const&) const
    void ShaderProgram::GetConstIndex(HashedString* param_1) {
        GetUniformLocationIndex(this, param_1);
    }

    // 0x100beba30, 32 bytes, inline, placed by class name
    // ShaderProgram::HasVertexShader() const
    void ShaderProgram::HasVertexShader() {
        operator!=((shared_ptr*)field_160, (_func_decltype_nullptr*)0);
    }

    // 0x100beba50, 32 bytes, inline, placed by class name
    // ShaderProgram::HasPixelShader() const
    void ShaderProgram::HasPixelShader() {
        operator!=((shared_ptr*)field_216, (_func_decltype_nullptr*)0);
    }

    // 0x100beba70, 32 bytes, inline, placed by class name
    // ShaderProgram::HasComputeShader() const
    void ShaderProgram::HasComputeShader() {
        operator!=((shared_ptr*)field_272, (_func_decltype_nullptr*)0);
    }

    // 0x100bebe90, 16 bytes, inline, placed by class name
    // ShaderProgram::GetCompileFlags() const
    uchar ShaderProgram::GetCompileFlags() {
        return m_compileFlags;
    }

    // 0x100c061b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17::$_17($_17&&): jumps straight to the base-object constructor

    // 0x100c061c0, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17::$_17($_17&&)
    /* $_17($_17&&) */

    void ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                              unsigned int)::__17(__17* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c06210, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17::$_17($_17 const&): jumps straight to the base-object constructor

    // 0x100c06220, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17::$_17($_17 const&)
    /* $_17($_17 const&) */

    void ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                              unsigned int)::__17(__17* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c06260, 128 bytes, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float>
   const*, unsigned int) const::$_17::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstMatrix4_int_unsigned_int_Matrix44T_ptr_unsigned_int* const ::$_17::operator()(
        RenderContext * param_1) {
        int iVar1;
        int iVar2;
        ShaderProgram* this_00;
        _func_SetShaderConstMatrix4_int_unsigned_int_Matrix44T_ptr_unsigned_int* p_Var3;
        float* pfVar4;

        this_00 = *(ShaderProgram**)this;
        p_Var3 = (_func_SetShaderConstMatrix4_int_unsigned_int_Matrix44T_ptr_unsigned_int*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var3 != '\0') {
            p_Var3 = (_func_SetShaderConstMatrix4_int_unsigned_int_Matrix44T_ptr_unsigned_int*)this_00->IsReady();
            if ((char)p_Var3 != '\0') {
                this_00->SetProgramActive(param_1);
                iVar1 = *(int*)(this + 8);
                iVar2 = *(int*)(this + 12);
                pfVar4 = (float*)((this + 16))->end();
                glUniformMatrix4fvNoTranspose(iVar1, iVar2, pfVar4);
                p_Var3 = (_func_SetShaderConstMatrix4_int_unsigned_int_Matrix44T_ptr_unsigned_int*)CheckGlErrorInternal(
                    "glUniformMatrix4fvNoTranspose",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    686);
            }
        }
        return p_Var3;
    }

    // 0x100c06500, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18::$_18($_18&&): jumps straight to the base-object constructor

    // 0x100c06510, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18::$_18($_18&&)
    /* $_18($_18&&) */

    void ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                              unsigned int)::__18(__18* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c06560, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18::$_18($_18 const&): jumps straight to the base-object constructor

    // 0x100c06570, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18::$_18($_18 const&)
    /* $_18($_18 const&) */

    void ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                              unsigned int)::__18(__18* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c065b0, 128 bytes, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float>
   const*, unsigned int) const::$_18::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstMatrix3_int_unsigned_int_Matrix33T_ptr_unsigned_int* const ::$_18::operator()(
        RenderContext * param_1) {
        int iVar1;
        int iVar2;
        ShaderProgram* this_00;
        _func_SetShaderConstMatrix3_int_unsigned_int_Matrix33T_ptr_unsigned_int* p_Var3;
        float* pfVar4;

        this_00 = *(ShaderProgram**)this;
        p_Var3 = (_func_SetShaderConstMatrix3_int_unsigned_int_Matrix33T_ptr_unsigned_int*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var3 != '\0') {
            p_Var3 = (_func_SetShaderConstMatrix3_int_unsigned_int_Matrix33T_ptr_unsigned_int*)this_00->IsReady();
            if ((char)p_Var3 != '\0') {
                this_00->SetProgramActive(param_1);
                iVar1 = *(int*)(this + 8);
                iVar2 = *(int*)(this + 12);
                pfVar4 = (float*)((this + 16))->end();
                glUniformMatrix3fvNoTranspose(iVar1, iVar2, pfVar4);
                p_Var3 = (_func_SetShaderConstMatrix3_int_unsigned_int_Matrix33T_ptr_unsigned_int*)CheckGlErrorInternal(
                    "glUniformMatrix3fvNoTranspose",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    720);
            }
        }
        return p_Var3;
    }

    // 0x100c068a0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19::$_19($_19&&): jumps straight to the base-object constructor

    // 0x100c068b0, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19::$_19($_19&&)
    /* $_19($_19&&) */

    void ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                              unsigned int)::__19(__19* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c06900, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19::$_19($_19 const&): jumps straight to the base-object constructor

    // 0x100c06910, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19::$_19($_19 const&)
    /* $_19($_19 const&) */

    void ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                              unsigned int)::__19(__19* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c06950, 128 bytes, inline, placed by class name
    // ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float>
   const*, unsigned int) const::$_19::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstMatrix2_int_unsigned_int_Matrix22T_ptr_unsigned_int* const ::$_19::operator()(
        RenderContext * param_1) {
        int iVar1;
        int iVar2;
        ShaderProgram* this_00;
        _func_SetShaderConstMatrix2_int_unsigned_int_Matrix22T_ptr_unsigned_int* p_Var3;
        float* pfVar4;

        this_00 = *(ShaderProgram**)this;
        p_Var3 = (_func_SetShaderConstMatrix2_int_unsigned_int_Matrix22T_ptr_unsigned_int*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var3 != '\0') {
            p_Var3 = (_func_SetShaderConstMatrix2_int_unsigned_int_Matrix22T_ptr_unsigned_int*)this_00->IsReady();
            if ((char)p_Var3 != '\0') {
                this_00->SetProgramActive(param_1);
                iVar1 = *(int*)(this + 8);
                iVar2 = *(int*)(this + 12);
                pfVar4 = (float*)((this + 16))->end();
                glUniformMatrix2fvNoTranspose(iVar1, iVar2, pfVar4);
                p_Var3 = (_func_SetShaderConstMatrix2_int_unsigned_int_Matrix22T_ptr_unsigned_int*)CheckGlErrorInternal(
                    "glUniformMatrix2fvNoTranspose",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    754);
            }
        }
        return p_Var3;
    }

    // 0x100c07c20, 128 bytes, inline, placed by class name
    // ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*)
   const::$_30::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstVector4_int_Vector4T_ptr* const ::$_30::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstVector4_int_Vector4T_ptr* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 =
            (_func_SetShaderConstVector4_int_Vector4T_ptr*)param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstVector4_int_Vector4T_ptr*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform4fv)(*(undefined4*)(this + 8), 1, this + 16);
                p_Var1 = (_func_SetShaderConstVector4_int_Vector4T_ptr*)CheckGlErrorInternal(
                    "__glewUniform4fv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    954);
            }
        }
        return p_Var1;
    }

    // 0x100c07d50, 128 bytes, inline, placed by class name
    // ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*)
   const::$_31::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstVector3_int_Vector3T_ptr* const ::$_31::operator()(RenderContext * param_1) {
        ShaderProgram* this_00;
        _func_SetShaderConstVector3_int_Vector3T_ptr* p_Var1;

        this_00 = *(ShaderProgram**)this;
        p_Var1 =
            (_func_SetShaderConstVector3_int_Vector3T_ptr*)param_1->IsObjectAlive((RenderResource*)&this_00->field_12);
        if ((char)p_Var1 != '\0') {
            p_Var1 = (_func_SetShaderConstVector3_int_Vector3T_ptr*)this_00->IsReady();
            if ((char)p_Var1 != '\0') {
                this_00->SetProgramActive(param_1);
                (*___glewUniform3fv)(*(undefined4*)(this + 8), 1, this + 12);
                p_Var1 = (_func_SetShaderConstVector3_int_Vector3T_ptr*)CheckGlErrorInternal(
                    "__glewUniform3fv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    964);
            }
        }
        return p_Var1;
    }

    // 0x100c07ef0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32::$_32($_32&&): jumps straight to the base-object constructor

    // 0x100c07f00, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32::$_32($_32&&)
    /* $_32($_32&&) */

    void ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                              unsigned int)::__32(__32* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c07f50, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32::$_32($_32 const&): jumps straight to the base-object constructor

    // 0x100c07f60, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32::$_32($_32 const&)
    /* $_32($_32 const&) */

    void ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                              unsigned int)::__32(__32* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c07fa0, 144 bytes, inline, placed by class name
    // ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float>
   const*, unsigned int) const::$_32::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstVector4_int_unsigned_int_Vector4T_ptr_unsigned_int* const ::$_32::operator()(
        RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstVector4_int_unsigned_int_Vector4T_ptr_unsigned_int* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstVector4_int_unsigned_int_Vector4T_ptr_unsigned_int*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstVector4_int_unsigned_int_Vector4T_ptr_unsigned_int*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform4fv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstVector4_int_unsigned_int_Vector4T_ptr_unsigned_int*)CheckGlErrorInternal(
                    "__glewUniform4fv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    996);
            }
        }
        return p_Var4;
    }

    // 0x100c08250, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33::$_33($_33&&): jumps straight to the base-object constructor

    // 0x100c08260, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33::$_33($_33&&)
    /* $_33($_33&&) */

    void ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)::__33(__33* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c082b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33::$_33($_33 const&): jumps straight to the base-object constructor

    // 0x100c082c0, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33::$_33($_33 const&)
    /* $_33($_33 const&) */

    void ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)::__33(__33* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c08300, 144 bytes, inline, placed by class name
    // ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float>
   const*) const::$_33::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstVector3_int_unsigned_int_Vector3T_ptr* const ::$_33::operator()(RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstVector3_int_unsigned_int_Vector3T_ptr* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstVector3_int_unsigned_int_Vector3T_ptr*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstVector3_int_unsigned_int_Vector3T_ptr*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform3fv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstVector3_int_unsigned_int_Vector3T_ptr*)CheckGlErrorInternal(
                    "__glewUniform3fv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1006);
            }
        }
        return p_Var4;
    }

    // 0x100c085a0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34::$_34($_34&&): jumps straight to the base-object constructor

    // 0x100c085b0, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34::$_34($_34&&)
    /* $_34($_34&&) */

    void ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)::__34(__34* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c08600, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34::$_34($_34 const&): jumps straight to the base-object constructor

    // 0x100c08610, 32 bytes, base-object constructor, inline, placed by class name
    // ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34::$_34($_34 const&)
    /* $_34($_34 const&) */

    void ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)::__34(__34* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray<math::Matrix44T<float> const>(param_1 + 16);
    }

    // 0x100c08650, 144 bytes, inline, placed by class name
    // ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34::operator()(RenderContext&) const
    /* ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float>
   const*) const::$_34::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    _func_SetShaderConstVector2_int_unsigned_int_Vector2T_ptr* const ::$_34::operator()(RenderContext * param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ShaderProgram* this_00;
        code* pcVar3;
        _func_SetShaderConstVector2_int_unsigned_int_Vector2T_ptr* p_Var4;
        undefined8 uVar5;

        this_00 = *(ShaderProgram**)this;
        p_Var4 = (_func_SetShaderConstVector2_int_unsigned_int_Vector2T_ptr*)param_1->IsObjectAlive(
            (RenderResource*)&this_00->field_12);
        if ((char)p_Var4 != '\0') {
            p_Var4 = (_func_SetShaderConstVector2_int_unsigned_int_Vector2T_ptr*)this_00->IsReady();
            if ((char)p_Var4 != '\0') {
                this_00->SetProgramActive(param_1);
                pcVar3 = ___glewUniform2fv;
                uVar1 = *(undefined4*)(this + 8);
                uVar2 = *(undefined4*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                p_Var4 = (_func_SetShaderConstVector2_int_unsigned_int_Vector2T_ptr*)CheckGlErrorInternal(
                    "__glewUniform2fv",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                    "ShaderProgram_OGL.cpp",
                    1015);
            }
        }
        return p_Var4;
    }

    // 0x100c276f0, 16 bytes, inline, placed by class name
    // ShaderProgram::SetLastUsedTimeSeconds(float) const
    void ShaderProgram::SetLastUsedTimeSeconds(float param_1) {
        m_lastUsedTimeSeconds = param_1;
    }

} // namespace jag::render
