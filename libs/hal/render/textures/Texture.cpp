// libs/hal/render/textures/Texture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/oldscape/jagex3/dash3d/Texture.h"

namespace jag::render {
    class TextureFormatBitSet {
    public:
        unsigned int GetBits() const;
        TextureFormatBitSet();
        void Clear();
        void AddFormatType(TextureFormatType arg1);
        bool HasFormatType(TextureFormatType arg1) const;
        bool IsValid() const;
        unsigned long IsUncompressed() const;
        uint64_t GetBitsPerPixel() const;
        unsigned long IsCompressed() const;
        TextureFormatBitSet(std::initializer_list<TextureFormatType> initializer_list);

    private:
        unsigned int m_bits;
    };

    class TextureSamplerStateTracker {
    public:
        // virtual methods in vtable order
        virtual ~TextureSamplerStateTracker();
        TextureSamplerStateTracker(Texture& texture);

    private:
        Texture* field_8;
        uint64_t field_16;
    };

    // 0x100009d00: Texture::GetDesc() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100066b70: Texture::GetType() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000b7900: Texture::GetFaceMipLevels() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectType() const

    // 0x100123da0: Texture::GetGLWriteMutex() const has the same machine code as oldscape::LoginManager::GetDevCredentialsFilename()

    // 0x1003c9110: Texture::GetSamplerState() const has the same machine code as game::MapArea::GetTargetBounds() const

    // 0x10085b0c0
    unsigned long TextureFormatBitSet::IsCompressed() const {
        unsigned int uVar2;
        uint64_t unaff_R14;

        bool cVar1 = HasFormatType(0);
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            cVar1 = HasFormatType(1);
            if (!cVar1) {
                uVar2 = HasFormatType(2);
                uVar3 = (unsigned long)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100bbda00
    TextureFormatBitSet::TextureFormatBitSet(std::initializer_list<TextureFormatType> initializer_list) : m_bits(0) {
        initializer_list<TextureFormatType>* local_28 = initializer_list;
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        }
    }

    // 0x100bc87d0
    void Texture::ValidateUpdateParams(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                       unsigned int arg5, unsigned int arg6, unsigned int arg7) {
        unsigned int* puVar4;
        unsigned int uVar5;
        unsigned int local_38;
        unsigned int local_34;

        auto pRVar3 = Instance();
        if (pRVar3->GetReadyState() != 0) {
            LogAssert(
                "RenderDevice::Instance().GetReadyState() == RenderContextReadyState::STATE_READY",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                20, nullptr);
        }
        pRVar3 = (RenderDevice*)pRVar3->Instance();
        if (pRVar3->GetCurrentThreadRenderContext()->IsLocked() == '\0') {
            LogAssert(
                "RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                21, nullptr);
        }
        unsigned int uVar6 = field_24;
        unsigned int uVar7 = field_28;
        if (arg1 != 0) {
            uVar5 = arg1;
            do {
                local_38 = 1;
                local_34 = uVar6 >> 1;
                puVar4 = std::max<unsigned int>(local_38, local_34);
                uVar6 = *puVar4;
                local_38 = 1;
                local_34 = uVar7 >> 1;
                puVar4 = std::max<unsigned int>(local_38, local_34);
                uVar7 = *puVar4;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        if (uVar6 < arg5 + arg2) {
            LogAssert(
                "(x + width) <= mipWidth",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                35, nullptr);
        }
        if (uVar7 < arg6 + arg3) {
            LogAssert(
                "(y + height) <= mipHeight",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                36, nullptr);
        }
        if (field_32 < arg7 + arg4) {
            LogAssert(
                "(z + depth) <= m_Desc.m_ArraySize",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                37, nullptr);
        }
        if (m_faceMipLevels <= arg1) {
            LogAssert(
                "iMip < m_faceMipLevels",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                39, nullptr);
        }
    }

    // 0x100bc8990
    void Texture::GetImageDataSize() const {
        GetTextureImageDataSize(m_type, field_24, field_28, field_32, field_36, m_faceMipLevels);
    }

    // 0x100bc98f0
    Texture::Texture(const char* str) {
        new (&field_8) RenderResource();
        field_0 = &PTR____cxa_pure_virtual_100f27d48;
        m_type = 4294967295;
        new (&field_24) Desc();
        m_faceMipLevels = 0;
        field_92 = 0;
        new (&field_96) eastl::fixed_string<char, 128>(str);
        field_264 = 0.0;
        new (field_272) game::EntityHighlightGlobalState::RadialHighlightState();
        m_nativeTextureId = 0;
        new (&field_304) SamplerState();
        new (&field_368) std::mutex();
        field_432 = 0;
        new (&field_448) SamplerState();
        field_8 = 0;
    }

    // 0x100bcaee0
    void Texture::GetName() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100bcda10
    bool Texture::IsCreated() const {
        return m_nativeTextureId != 0;
    }

    // 0x100be2d60
    uint64_t Texture::Desc::operator==(const Texture::Desc& desc) const {
        if (((((field_0 == desc.field_0) && (field_4 == desc.field_4)) && (field_8 == desc.field_8)) &&
             ((((field_12 == desc.field_12 && (field_16 == desc.field_16)) &&
                ((field_20 == desc.field_20 && ((field_24 == desc.field_24 && (field_28 == desc.field_28)))))) &&
               (field_32 == desc.field_32)))) &&
            (((field_36 == desc.field_36 && (field_40 == desc.field_40)) && (field_48 == desc.field_48)))) {
            return field_56 == desc.field_56;
        }
        return 0;
    }

    // 0x100c34c80
    Texture::Desc::Desc() : field_60(35002) {
        SetToDefault();
    }

    // 0x100c34ca0
    void Texture::Desc::SetToDefault() {
        field_0 = 0;
        field_4 = 0;
        field_8 = 1;
        field_12 = 0;
        field_16 = 1;
        field_36 = 0;
        field_40 = 0;
        field_48 = 0;
        *(uint16_t*)&field_56 = 0;
        field_20 = 0;
        field_24 = 0;
        *(uint64_t*)((long)&field_24 + 1) = 0;
    }

} // namespace jag::render
