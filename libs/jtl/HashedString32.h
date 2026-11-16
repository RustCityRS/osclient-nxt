// libs/jtl/HashedString32.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::render {
    // 0x100bf6b30
    VertexShaderSourceStream::~VertexShaderSourceStream() {
        ~VertexShaderSourceStream(this);
        operator delete(this);
    }

    // 0x100bf6bb0
    PixelShaderSourceStream::~PixelShaderSourceStream() {
        ~PixelShaderSourceStream(this);
        operator delete(this);
    }

    // 0x100bf6c30
    ShaderSourceStream::~ShaderSourceStream() {}

    // 0x100bf7640
    BufferedImageData::BufferedImageData()
        : field_0(nullptr), field_8(nullptr, 0, 0, false), field_32(0), field_40(0) {}

    // 0x100bf7670
    BufferedImageData::~BufferedImageData() {
        if (field_0 != nullptr) {
            field_0->UnmapColourTargetData();
        }
        field_8.~ResourceDataT();
    }

    // 0x100bf85f0
    ShaderTextureSamplerData::ShaderTextureSamplerData(unsigned int arg1, const Texture* texture, int arg3,
                                                       const SamplerState* samplerState, bool arg5)
        : field_0(texture), field_8(samplerState), field_16(arg1), field_20(arg3), field_24(arg5) {}

    // 0x100bf8610
    ShaderTextureImageData::ShaderTextureImageData(unsigned int arg1, const Texture* texture, Access access)
        : field_0(texture), field_8(arg1), field_12(access) {}

    // 0x100bf8830
    uint32_t VertexElementDesc::operator==(const VertexElementDesc& vertexElementDesc) const {
        int iVar1;

        if ((((field_0 == vertexElementDesc.field_0) &&
              (iVar1 = _strcmp(field_8, vertexElementDesc.field_8), iVar1 == 0)) &&
             (field_16 == vertexElementDesc.field_16)) &&
            ((field_20 == vertexElementDesc.field_20 && (field_24 == vertexElementDesc.field_24)))) {
            return field_28 == vertexElementDesc.field_28;
        }
        return 0;
    }

} // namespace jag::render

namespace jag {
    class HashedString32 {
    public:
        unsigned int GetHash() const;
        HashedString32(const char* str);
        void CalcHash();

    private:
        char* field_0;
        unsigned int m_hash;
        uint8_t _unknown_12[4];
    };

    // 0x100024170: HashedString32::GetHash() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100bf6a90
    HashedString32::HashedString32(const char* str) : field_0(str), m_hash(0) {
        if (str == nullptr) {
            LogAssert("str != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/HashedString32.h", 15,
                      nullptr);
        }
        CalcHash();
    }

    // 0x100bf6ae0
    void HashedString32::CalcHash() {
        m_hash = 0;
        char* pcVar2 = field_0;
        bool cVar1 = *pcVar2;
        if (cVar1) {
            do {
                pcVar2 = pcVar2 + 1;
                hash_combine_32(&m_hash, (int)cVar1);
                cVar1 = *pcVar2;
            } while (cVar1);
        }
    }

    // 0x100bf7fd0
    uint64_t BucketAllocatorSTL<char>::max_size() const {
        return 18446744073709551615;
    }

    // 0x100bf8040
    void BucketAllocatorSTL<char>::allocate(unsigned long arg1, char* str) {
        BucketManager::Allocate((unsigned long)str, 0, 1);
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x100bfabc0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&& arg1) {
        *(uint64_t*)this = 0;
        *(RenderTargets**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfac00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfac10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100bfac20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfac30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderTargets::Destroy()::$_0::operator()((__0*)this, arg1);
    }

    // 0x100bfac50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x100bf83b0
    Matrix22T<float>* Matrix22T<float>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix22.inl",
                      166, nullptr);
        }
        return this + (unsigned long)arg1 * 8;
    }

    // 0x100bf83f0
    Vector2T<float>* Vector2T<float>::operator[](unsigned int arg1) const {
        if (1 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector2.inl",
                      143, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

    // 0x100bf8430
    Vector2T<float>* Vector2T<float>::operator[](unsigned int arg1) {
        if (1 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector2.inl",
                      136, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

} // namespace jag::math
