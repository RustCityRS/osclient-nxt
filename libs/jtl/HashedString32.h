// libs/jtl/HashedString32.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::render {
    // 0x100bf6b30, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // VertexShaderSourceStream::~VertexShaderSourceStream()
    void VertexShaderSourceStream::~VertexShaderSourceStream() {
        ~VertexShaderSourceStream(this);
        operator_delete(this);
    }

    // 0x100bf6bb0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // PixelShaderSourceStream::~PixelShaderSourceStream()
    void PixelShaderSourceStream::~PixelShaderSourceStream() {
        ~PixelShaderSourceStream(this);
        operator_delete(this);
    }

    // 0x100bf6c30, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ShaderSourceStream::~ShaderSourceStream()
    void ShaderSourceStream::~ShaderSourceStream() {
        ~basic_stringstream();
    }

    // 0x100bf7640, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BufferedImageData::BufferedImageData()
    void BufferedImageData::BufferedImageData() {
        field_0 = (BufferedRenderTargets*)0;
        new (&field_8, (uchar*)0, 0, 0, false) ResourceDataT<unsigned char const>();
        field_32 = 0;
        field_40 = 0;
    }

    // 0x100bf7670, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BufferedImageData::~BufferedImageData()
    void BufferedImageData::~BufferedImageData() {
        if (field_0 != (BufferedRenderTargets*)0) {
            field_0->UnmapColourTargetData();
        }
        (&field_8)->~ResourceDataT();
    }

    // 0x100bf85f0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShaderTextureSamplerData::ShaderTextureSamplerData(unsigned int, Texture const*, int, SamplerState const*, bool)
    void ShaderTextureSamplerData::ShaderTextureSamplerData(uint param_1, Texture* param_2, int param_3,
                                                            SamplerState* param_4, bool param_5) {
        field_0 = param_2;
        field_8 = param_4;
        field_16 = param_1;
        field_20 = param_3;
        field_24 = param_5;
    }

    // 0x100bf8610, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShaderTextureImageData::ShaderTextureImageData(unsigned int, Texture const*, Access)
    void ShaderTextureImageData::ShaderTextureImageData(undefined4 param_1, undefined8 param_2, undefined4 param_4) {
        field_0 = param_2;
        field_8 = param_1;
        field_12 = param_4;
    }

    // 0x100bf8830, 96 bytes, inline, placed by debug map only (low confidence)
    // VertexElementDesc::operator==(VertexElementDesc const&) const
    /* VertexElementDesc::TEMPNAMEPLACEHOLDERVALUE(VertexElementDesc const&)
   const */

    undefined4 VertexElementDesc::operator==(VertexElementDesc* param_1) {
        int iVar1;

        if ((((field_0 == param_1->field_0) && (iVar1 = _strcmp(field_8, param_1->field_8), iVar1 == 0)) &&
             (field_16 == param_1->field_16)) &&
            ((field_20 == param_1->field_20 && (field_24 == param_1->field_24)))) {
            return CONCAT31((int3)(field_28 >> 8), field_28 == param_1->field_28);
        }
        return 0;
    }

} // namespace jag::render

namespace jag {
    class HashedString32 {
    public:
        GetHash() const;
        HashedString32(char const*);
        void CalcHash();

        // data members, from how the methods use this: 16 bytes
        char* field_0;      // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[4];
    };

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    HashedString32::GetHash() const;

    // 0x100bf6a80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HashedString32::HashedString32(char const*): jumps straight to the base-object constructor

    // 0x100bf6a90, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // HashedString32::HashedString32(char const*)
    void HashedString32::HashedString32(char* param_1) {
        field_0 = param_1;
        field_8 = 0;
        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("str != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/HashedString32.h", 15,
                      (char*)0);
        }
        CalcHash(this);
    }

    // 0x100bf6ae0, 80 bytes, inline, placed by class name and debug map
    // HashedString32::CalcHash()
    void HashedString32::CalcHash() {
        char cVar1;
        char* pcVar2;

        field_8 = 0;
        pcVar2 = field_0;
        cVar1 = *pcVar2;
        if (cVar1 != '\0') {
            do {
                pcVar2 = pcVar2 + 1;
                hash_combine_32(&field_8, (int)cVar1);
                cVar1 = *pcVar2;
            } while (cVar1 != '\0');
        }
    }

    // 0x100bf7fd0, 16 bytes, inline, placed by debug map only (low confidence)
    // BucketAllocatorSTL<char>::max_size() const
    undefined8 BucketAllocatorSTL<char>::max_size() {
        return 18446744073709551615;
    }

    // 0x100bf8040, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketAllocatorSTL<char>::allocate(unsigned long, char*)
    void BucketAllocatorSTL<char>::allocate(ulong param_1, char* param_2) {
        BucketManager::Allocate((ulong)param_2, 0, 1);
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x100bfabc0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::__0, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __0* param_1) {
        *(undefined8*)this = 0;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfac00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfac10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Destroy()::$_0,
   void>(render::RenderTargets::Destroy()::$_0&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100bfac20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfac30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Destroy()::$_0,
   void>(render::RenderTargets::Destroy()::$_0&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderTargets::Destroy()::$_0::operator()(param_1, param_2);
    }

    // 0x100bfac50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Destroy()::$_0, void>(render::RenderTargets::Destroy()::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x100bf83b0, 64 bytes, inline, placed by debug map only (low confidence)
    // Matrix22T<float>::operator[](unsigned int) const
    Matrix22T<float>* Matrix22T<float>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix22.inl",
                      166, (char*)0);
        }
        return this + (ulong)param_1 * 8;
    }

    // 0x100bf83f0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::operator[](unsigned int) const
    Vector2T<float>* Vector2T<float>::operator[](uint param_1) {
        if (1 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector2.inl",
                      143, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

    // 0x100bf8430, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::operator[](unsigned int)
    Vector2T<float>* Vector2T<float>::operator[](uint param_1) {
        if (1 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector2.inl",
                      136, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

} // namespace jag::math
