// libs/hal/render/shaders/ShaderProgram.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class ShaderProgram {
    public:
        // virtual methods in vtable order
        virtual ~ShaderProgram();
        virtual void OnEndFrame();
        void GetVertexDecl() const;
        uint8_t* GetPixelShaderSource() const;
        uint8_t* GetComputeShaderSource() const;
        uint8_t* GetVertexShaderSource() const;
        float GetLastUsedTimeSeconds() const;
        void SetName(const char* str);
        void CreateFromSourceString(const char* str1, const char* str2, const VertexElementDesc* vertexElementDesc,
                                    unsigned int arg4, unsigned char arg5);
        void Destroy();
        unsigned int GetNativeShaderProgram() const;
        void GetConstIndex(const HashedString& hashedString) const;
        void SetShaderConstVector4(const HashedString& hashedString, unsigned int arg2,
                                   const math::Vector4T<float>* vector4, unsigned int arg4) const;
        ShaderProgram(const char* str);
        uint32_t GetStorageBufferIndex(const HashedString& hashedString) const;
        void SetShaderConstMatrix4(const HashedString& hashedString, unsigned int arg2,
                                   const math::Matrix44T<float>* matrix44, unsigned int arg4) const;
        uint32_t GetUniformLocationIndex(const HashedString& hashedString) const;
        void SetShaderConstMatrix4(int arg1, unsigned int arg2, const math::Matrix44T<float>* matrix44,
                                   unsigned int arg4) const;
        void SetShaderConstMatrix3(const HashedString& hashedString, unsigned int arg2,
                                   const math::Matrix33T<float>* matrix33, unsigned int arg4) const;
        void SetShaderConstMatrix3(int arg1, unsigned int arg2, const math::Matrix33T<float>* matrix33,
                                   unsigned int arg4) const;
        void SetShaderConstMatrix2(const HashedString& hashedString, unsigned int arg2,
                                   const math::Matrix22T<float>* matrix22, unsigned int arg4) const;
        void SetShaderConstMatrix2(int arg1, unsigned int arg2, const math::Matrix22T<float>* matrix22,
                                   unsigned int arg4) const;
        void SetShaderConstFloat4Array(const HashedString& hashedString, unsigned int arg2, const float* arg3,
                                       unsigned int arg4) const;
        void SetShaderConstFloat4Array(int arg1, unsigned int arg2, const float* arg3, unsigned int arg4) const;
        void SetShaderConstUint4Array(const HashedString& hashedString, unsigned int arg2, const unsigned int* arg3,
                                      unsigned int arg4) const;
        void SetShaderConstUint4Array(int arg1, unsigned int arg2, const unsigned int* arg3, unsigned int arg4) const;
        void SetShaderConstFloat3Array(const HashedString& hashedString, unsigned int arg2, const float* arg3) const;
        void SetShaderConstFloat3Array(int arg1, unsigned int arg2, const float* arg3) const;
        void SetShaderConstFloat2Array(const HashedString& hashedString, unsigned int arg2, const float* arg3) const;
        void SetShaderConstFloat2Array(int arg1, unsigned int arg2, const float* arg3) const;
        void SetShaderConstFloat1Array(const HashedString& hashedString, unsigned int arg2, const float* arg3,
                                       unsigned int arg4) const;
        void SetShaderConstFloat1Array(int arg1, unsigned int arg2, const float* arg3, unsigned int arg4) const;
        void SetShaderConstInt4Array(const HashedString& hashedString, unsigned int arg2, const int* arg3) const;
        void SetShaderConstInt4Array(int arg1, unsigned int arg2, const int* arg3) const;
        void SetShaderConstInt3Array(const HashedString& hashedString, unsigned int arg2, const int* arg3) const;
        void SetShaderConstInt3Array(int arg1, unsigned int arg2, const int* arg3) const;
        void SetShaderConstInt2Array(const HashedString& hashedString, unsigned int arg2, const int* arg3) const;
        void SetShaderConstInt2Array(int arg1, unsigned int arg2, const int* arg3) const;
        void SetShaderConstInt1Array(const HashedString& hashedString, unsigned int arg2, const int* arg3) const;
        void SetShaderConstInt1Array(int arg1, unsigned int arg2, const int* arg3) const;
        void SetShaderConstUInt1Array(const HashedString& hashedString, unsigned int arg2, const unsigned int* arg3,
                                      unsigned int arg4) const;
        void SetShaderConstUInt1Array(int arg1, unsigned int arg2, const unsigned int* arg3, unsigned int arg4) const;
        void SetShaderConstVector4(const HashedString& hashedString, const math::Vector4T<float>* vector4) const;
        void SetShaderConstVector4(int arg1, const math::Vector4T<float>* vector4) const;
        void SetShaderConstVector3(const HashedString& hashedString, const math::Vector3T<float>* vector3) const;
        void SetShaderConstVector3(int arg1, const math::Vector3T<float>* vector3) const;
        void SetShaderConstVector4(int arg1, unsigned int arg2, const math::Vector4T<float>* vector4,
                                   unsigned int arg4) const;
        void SetShaderConstVector3(const HashedString& hashedString, unsigned int arg2,
                                   const math::Vector3T<float>* vector3) const;
        void SetShaderConstVector3(int arg1, unsigned int arg2, const math::Vector3T<float>* vector3) const;
        void SetShaderConstVector2(const HashedString& hashedString, unsigned int arg2,
                                   const math::Vector2T<float>* vector2) const;
        void SetShaderConstVector2(int arg1, unsigned int arg2, const math::Vector2T<float>* vector2) const;
        void SetShaderConstVector2(const HashedString& hashedString, const math::Vector2T<float>* vector2) const;
        void SetShaderConstFloat4(const HashedString& hashedString, float arg2, float arg3, float arg4,
                                  float arg5) const;
        void SetShaderConstFloat4(int arg1, float arg2, float arg3, float arg4, float arg5) const;
        void SetShaderConstFloat3(const HashedString& hashedString, float arg2, float arg3, float arg4) const;
        void SetShaderConstFloat3(int arg1, float arg2, float arg3, float arg4) const;
        void SetShaderConstFloat2(const HashedString& hashedString, float arg2, float arg3) const;
        void SetShaderConstFloat2(int arg1, float arg2, float arg3) const;
        void SetShaderConstFloat1(const HashedString& hashedString, float arg2) const;
        void SetShaderConstFloat1(int arg1, float arg2) const;
        void SetShaderConstInt4(const HashedString& hashedString, int arg2, int arg3, int arg4, int arg5) const;
        void SetShaderConstInt4(int arg1, int arg2, int arg3, int arg4, int arg5) const;
        void SetShaderConstInt3(const HashedString& hashedString, int arg2, int arg3, int arg4) const;
        void SetShaderConstInt3(int arg1, int arg2, int arg3, int arg4) const;
        void SetShaderConstInt2(const HashedString& hashedString, int arg2, int arg3) const;
        void SetShaderConstInt2(int arg1, int arg2, int arg3) const;
        void SetShaderConstInt1(const HashedString& hashedString, int arg2) const;
        void SetShaderConstInt1(int arg1, int arg2) const;
        void SetProgramActive() const;
        void SetProgramActive(RenderContext& renderContext) const;
        void WaitForAsyncCompile() const;
        void CreateFromSourceString(const char* str, unsigned char arg2);
        void HasVertexShader() const;
        void HasPixelShader() const;
        void HasComputeShader() const;
        unsigned char GetCompileFlags() const;
        uint64_t CreateFromSourceString();
        void CreateFromSourceString(const char* str1, const char* str2, const VertexDeclaration* vertexDeclaration,
                                    unsigned char arg4);
        void RebuildFromInternalSource();
        uint32_t CreateFromBinary();
        void DestroyBinary();
        unsigned long CreateFromSourceStringInternal();
        void LinkShaderAsync();
        void LinkShader();
        void PostLinkShader();
        void BindVertexElementAttribs(const VertexElementDesc* vertexElementDesc, unsigned int arg2);
        void RetrieveShaderBinary();
        bool CreateShaderInternal(const char* str1, const char* str2, const char* str3);
        void ReleaseNativeResources();
        void BindConstBufferSlot(unsigned int arg1, const HashedString& hashedString, unsigned int arg3) const;
        uint32_t GetConstBlockIndex(const HashedString& hashedString) const;
        uint32_t GetConstBlockSize(const HashedString& hashedString) const;
        void SetShaderConstSampler(int arg1, int arg2) const;
        uint32_t GetUniformBindingIndex(const HashedString& hashedString) const;
        bool IsReady() const;
        void PreRender();
        bool IsReadyGL() const;
        void SetLastUsedTimeSeconds(float arg1) const;

    private:
        RenderDeviceOnEndFrame field_8;
        uint8_t _unknown_9[111];
        uint8_t m_vertexShaderSource[1];
        uint8_t _unknown_121[55];
        uint8_t m_pixelShaderSource[1];
        uint8_t _unknown_177[143];
        uint8_t field_320;
        uint8_t _unknown_321[3];
        uint8_t field_324;
        uint8_t _unknown_325[3];
        int field_328;
        float m_lastUsedTimeSeconds;
        uint8_t _unknown_336[32];
        unsigned char m_compileFlags;
        uint8_t _unknown_369[1359];
        unsigned long field_1728;
        uint8_t _unknown_1736[96];
        unsigned int m_nativeShaderProgram;
        int field_1836;
        uint8_t _unknown_1840[16];
    };

    // 0x100892520
    float ShaderProgram::GetLastUsedTimeSeconds() const {
        return m_lastUsedTimeSeconds;
    }

    // 0x100bc28a0
    void ShaderProgram::SetName(const char* str) {
        (&field_336)->assign(str);
    }

    // 0x100bdf660
    void ShaderProgram::GetConstIndex(const HashedString& hashedString) const {
        GetUniformLocationIndex(hashedString);
    }

    // 0x100beba30
    void ShaderProgram::HasVertexShader() const {
        field_160 != nullptr;
    }

    // 0x100beba50
    void ShaderProgram::HasPixelShader() const {
        field_216 != nullptr;
    }

    // 0x100beba70
    void ShaderProgram::HasComputeShader() const {
        field_272 != nullptr;
    }

    // 0x100bebe90
    unsigned char ShaderProgram::GetCompileFlags() const {
        return m_compileFlags;
    }

    // 0x100c061c0
    ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                         unsigned int) const ::$_17::$_17($_17&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06220
    ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                         unsigned int) const ::$_17::$_17(const $_17& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06260
    void
    ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                         unsigned int) const ::$_17::operator()(RenderContext& renderContext) const {
        int arg1;
        int arg2;
        float* arg3;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                arg1 = *(int*)(this + 8);
                arg2 = *(int*)(this + 12);
                arg3 = (float*)((this + 16))->end();
                glUniformMatrix4fvNoTranspose(arg1, arg2, arg3);
                CheckGlErrorInternal("glUniformMatrix4fvNoTranspose",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     686);
            }
        }
    }

    // 0x100c06510
    ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                         unsigned int) const ::$_18::$_18($_18&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06570
    ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                         unsigned int) const ::$_18::$_18(const $_18& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c065b0
    void
    ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                         unsigned int) const ::$_18::operator()(RenderContext& renderContext) const {
        int arg1;
        int arg2;
        float* arg3;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                arg1 = *(int*)(this + 8);
                arg2 = *(int*)(this + 12);
                arg3 = (float*)((this + 16))->end();
                glUniformMatrix3fvNoTranspose(arg1, arg2, arg3);
                CheckGlErrorInternal("glUniformMatrix3fvNoTranspose",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     720);
            }
        }
    }

    // 0x100c068b0
    ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                         unsigned int) const ::$_19::$_19($_19&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06910
    ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                         unsigned int) const ::$_19::$_19(const $_19& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c06950
    void
    ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                         unsigned int) const ::$_19::operator()(RenderContext& renderContext) const {
        int arg1;
        int arg2;
        float* arg3;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                arg1 = *(int*)(this + 8);
                arg2 = *(int*)(this + 12);
                arg3 = (float*)((this + 16))->end();
                glUniformMatrix2fvNoTranspose(arg1, arg2, arg3);
                CheckGlErrorInternal("glUniformMatrix2fvNoTranspose",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     754);
            }
        }
    }

    // 0x100c07c20
    void ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30::operator()(
        RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform4fv)(*(uint32_t*)(this + 8), 1, this + 16);
                CheckGlErrorInternal("__glewUniform4fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     954);
            }
        }
    }

    // 0x100c07d50
    void ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31::operator()(
        RenderContext& renderContext) const {
        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                (*___glewUniform3fv)(*(uint32_t*)(this + 8), 1, this + 12);
                CheckGlErrorInternal("__glewUniform3fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     964);
            }
        }
    }

    // 0x100c07f00
    ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                         unsigned int) const ::$_32::$_32($_32&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07f60
    ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                         unsigned int) const ::$_32::$_32(const $_32& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c07fa0
    void
    ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                         unsigned int) const ::$_32::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform4fv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform4fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     996);
            }
        }
    }

    // 0x100c08260
    ShaderProgram::SetShaderConstVector3(int, unsigned int,
                                         math::Vector3T<float> const*) const ::$_33::$_33($_33&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c082c0
    ShaderProgram::SetShaderConstVector3(int, unsigned int,
                                         math::Vector3T<float> const*) const ::$_33::$_33(const $_33& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c08300
    void ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33::operator()(
        RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform3fv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform3fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1006);
            }
        }
    }

    // 0x100c085b0
    ShaderProgram::SetShaderConstVector2(int, unsigned int,
                                         math::Vector2T<float> const*) const ::$_34::$_34($_34&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c08610
    ShaderProgram::SetShaderConstVector2(int, unsigned int,
                                         math::Vector2T<float> const*) const ::$_34::$_34(const $_34& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        new ((this + 16)) WrapArray(*((arg1 + 16)));
    }

    // 0x100c08650
    void ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34::operator()(
        RenderContext& renderContext) const {
        uint32_t uVar1;
        uint32_t uVar2;
        void* pcVar3;
        uint64_t uVar5;

        ShaderProgram* this_00 = *(ShaderProgram**)this;
        if (renderContext.IsObjectAlive(&this_00->field_12)) {
            if (this_00->IsReady()) {
                this_00->SetProgramActive(renderContext);
                pcVar3 = ___glewUniform2fv;
                uVar1 = *(uint32_t*)(this + 8);
                uVar2 = *(uint32_t*)(this + 12);
                uVar5 = ((this + 16))->end();
                (*pcVar3)(uVar1, uVar2, uVar5);
                CheckGlErrorInternal("__glewUniform2fv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderProgram_OGL.cpp",
                                     1015);
            }
        }
    }

    // 0x100c276f0
    void ShaderProgram::SetLastUsedTimeSeconds(float arg1) const {
        m_lastUsedTimeSeconds = arg1;
    }

} // namespace jag::render
