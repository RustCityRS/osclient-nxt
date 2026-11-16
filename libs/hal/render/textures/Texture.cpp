// libs/hal/render/textures/Texture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/oldscape/jagex3/dash3d/Texture.h"

namespace jag::render {
    class TextureFormatBitSet {
    public:
        uint GetBits() const;
        TextureFormatBitSet();
        Clear();
        void AddFormatType(TextureFormatType);
        HasFormatType(TextureFormatType) const;
        IsValid() const;
        ulong IsUncompressed() const;
        GetBitsPerPixel() const;
        ulong IsCompressed() const;
        TextureFormatBitSet(std::initializer_list<TextureFormatType>);

        // data members, from how the methods use this: 4 bytes
        uint m_bits; // offset 0
    };

    class TextureSamplerStateTracker {
    public:
        // virtual methods in vtable order
        virtual ~TextureSamplerStateTracker();
        TextureSamplerStateTracker(Texture&);

        // data members, from how the methods use this: 24 bytes
        undefined* field_0;  // offset 0, vtable pointer
        Texture* field_8;    // offset 8
        undefined8 field_16; // offset 16
    };

    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    Texture::GetDesc() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int Texture::GetType() const;

    // 0x1000b7900: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectType() const, which has identical code
    uint Texture::GetFaceMipLevels() const;

    // 0x100123da0: the linker folded this into oldscape::LoginManager::GetDevCredentialsFilename(), which has identical code
    Texture::GetGLWriteMutex() const;

    // 0x1003c9110: the linker folded this into game::MapArea::GetTargetBounds() const, which has identical code
    Texture::GetSamplerState() const;

    // 0x10085b0c0, 80 bytes, inline, placed by class header (inline)
    // TextureFormatBitSet::IsCompressed() const
    ulong TextureFormatBitSet::IsCompressed() {
        char cVar1;
        uint uVar2;
        undefined8 unaff_R14;
        ulong uVar3;

        cVar1 = HasFormatType(this, 0);
        uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 == '\0') {
            cVar1 = HasFormatType(this, 1);
            if (cVar1 == '\0') {
                uVar2 = HasFormatType(this, 2);
                uVar3 = (ulong)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100bb7820, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TextureFormatBitSet::TextureFormatBitSet(std::initializer_list<TextureFormatType>): jumps straight to the base-object constructor

    // 0x100bbda00, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // TextureFormatBitSet::TextureFormatBitSet(std::initializer_list<TextureFormatType>)
    void TextureFormatBitSet::TextureFormatBitSet(undefined8 param_2, undefined8 param_3) {
        undefined4* puVar1;
        undefined4* puVar2;
        undefined8 local_30;
        undefined8 local_28;

        m_bits = 0;
        local_30 = param_2;
        local_28 = param_3;
        puVar1 = (undefined4*)local_30.begin();
        puVar2 = (undefined4*)local_30.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            AddFormatType(this, *puVar1);
        }
    }

    // 0x100bc87d0, 432 bytes, placed by class name and debug map
    // Texture::ValidateUpdateParams(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    void Texture::ValidateUpdateParams(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5,
                                       uint param_6, uint param_7) {
        RenderDevice* pRVar3;
        RenderContext* this_00;
        uint* puVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        uint local_38;
        uint local_34;

        pRVar3 = (RenderDevice*)Instance();
        if (pRVar3->GetReadyState() != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "RenderDevice::Instance().GetReadyState() == RenderContextReadyState::STATE_READY",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                20, (char*)0);
        }
        pRVar3 = (RenderDevice*)pRVar3->Instance();
        this_00 = (RenderContext*)pRVar3->GetCurrentThreadRenderContext();
        if (this_00->IsLocked() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                21, (char*)0);
        }
        uVar6 = field_24;
        uVar7 = field_28;
        if (param_1 != 0) {
            uVar5 = param_1;
            do {
                local_38 = 1;
                local_34 = uVar6 >> 1;
                puVar4 = std::max<unsigned int>(&local_38, &local_34);
                uVar6 = *puVar4;
                local_38 = 1;
                local_34 = uVar7 >> 1;
                puVar4 = std::max<unsigned int>(&local_38, &local_34);
                uVar7 = *puVar4;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        if (uVar6 < param_5 + param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "(x + width) <= mipWidth",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                35, (char*)0);
        }
        if (uVar7 < param_6 + param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "(y + height) <= mipHeight",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                36, (char*)0);
        }
        if (field_32 < param_7 + param_4) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "(z + depth) <= m_Desc.m_ArraySize",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                37, (char*)0);
        }
        if (m_faceMipLevels <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "iMip < m_faceMipLevels",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/Texture.cpp",
                39, (char*)0);
        }
    }

    // 0x100bc8990, 48 bytes, placed by class name and debug map
    // Texture::GetImageDataSize() const
    void Texture::GetImageDataSize() {
        GetTextureImageDataSize(m_type, field_24, field_28, field_32, field_36, m_faceMipLevels);
    }

    // 0x100bc98f0, 272 bytes, base-object constructor, placed by class name
    // Texture::Texture(char const*)
    void Texture::Texture(char* param_1) {
        new (&field_8) RenderResource();
        field_0 = &PTR____cxa_pure_virtual_100f27d48;
        m_type = -1;
        new (&field_24) Desc();
        m_faceMipLevels = 0;
        field_92 = 0;
        new (&field_96, param_1) eastl::fixed_string<char, 128, true, eastl::allocator>();
        field_264 = 0.0;
        new (field_272) game::EntityHighlightGlobalState::RadialHighlightState();
        m_nativeTextureId = 0;
        new (&field_304) SamplerState();
        new (&field_368) std::mutex();
        field_432 = 0;
        new (&field_448) SamplerState();
        field_8 = 0;
    }

    // 0x100bcaee0, 16 bytes, inline, placed by class name
    // Texture::GetName() const
    void Texture::GetName() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100bcda10, 16 bytes, placed by class name
    // Texture::IsCreated() const
    bool Texture::IsCreated() {
        return m_nativeTextureId != 0;
    }

    // 0x100be2d60, 128 bytes, inline, placed by class name
    // Texture::Desc::operator==(Texture::Desc const&) const
    /* Texture::Desc::TEMPNAMEPLACEHOLDERVALUE(Texture::Desc const&) const */

    undefined8 Texture::Desc::operator==(Desc* param_1) {
        if (((((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) &&
             ((((field_12 == param_1->field_12 && (field_16 == param_1->field_16)) &&
                ((field_20 == param_1->field_20 &&
                  ((field_24 == param_1->field_24 && (field_28 == param_1->field_28)))))) &&
               (field_32 == param_1->field_32)))) &&
            (((field_36 == param_1->field_36 && (field_40 == param_1->field_40)) && (field_48 == param_1->field_48)))) {
            return CONCAT71((int7)((ulong)field_48 >> 8), field_56 == param_1->field_56);
        }
        return 0;
    }

    // 0x100c27320, 16 bytes, complete-object constructor, inline, placed by class name
    // Texture::Desc::Desc(): jumps straight to the base-object constructor

    // 0x100c34c80, 32 bytes, base-object constructor, inline, placed by class name
    // Texture::Desc::Desc()
    void Texture::Desc::Desc() {
        field_60 = 35002;
        SetToDefault(this);
    }

    // 0x100c34ca0, 64 bytes, inline, placed by class name
    // Texture::Desc::SetToDefault()
    void Texture::Desc::SetToDefault() {
        field_0 = 0;
        field_4 = 0;
        field_8 = 1;
        field_12 = 0;
        field_16 = 1;
        field_36 = 0;
        field_40 = 0;
        field_48 = 0;
        *(undefined2*)&field_56 = 0;
        field_20 = 0;
        field_24 = 0;
        *(undefined8*)((long)&field_24 + 1) = 0;
    }

} // namespace jag::render
