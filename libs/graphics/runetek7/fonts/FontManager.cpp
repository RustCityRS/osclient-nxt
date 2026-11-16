// libs/graphics/runetek7/fonts/FontManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "FontManager.h"

namespace jag::graphics {
    // 0x1008e58c0
    FontManager::FontManager(SpriteAtlasManager* spriteAtlasManager, Js5ResourceProvider* js5ResourceProvider,
                             IConfigProvider* iConfigProvider, Js5ArchiveSettings* js5ArchiveSettings)
        : field_0(spriteAtlasManager), field_8(js5ResourceProvider), field_16(iConfigProvider),
          field_24(64, "FontManager") {
        uint8_t local_80[72];

        field_5400.reserve(256);
        new (local_80) ConfigDecoderInfo();
        (*((local_80 + 8))) = this;
        (*field_16->_vptr[1]._dtor)(field_16, js5ArchiveSettings, (ConfigDecoderInfo*)local_80);
    }

    // 0x1008e5a50
    FontManager::~FontManager() {
        Flush();
        field_5400.~vector_map();
        field_24.~LRUHashCache();
    }

    // 0x1008e5aa0
    void FontManager::Flush() {
        field_24.Reset();
    }

    // 0x1008e5ac0
    void FontManager::MainLogic() {
        field_24.Clean(1500);
    }

    // 0x1008e5ae0
    Js5ResourceProvider* FontManager::GetFont(int arg1, const shared_ptr<SpriteAtlas>& spriteAtlas) {
        Js5ResourceProvider* js5ArchiveSettings;
        uint8_t uVar3;
        unsigned char arg3;
        int iVar4;
        shared_ptr* this_02;
        FontMetrics* pFVar5;
        uint64_t extraout_var;
        Js5ResourceProvider* this_03;
        ReturnValue local_b0;
        Js5ResourceProvider* local_a0;
        ReturnValue local_90;
        shared_ptr* local_88;
        ReturnValue local_80;
        shared_ptr local_58;
        shared_ptr local_48;
        VectorFontLoader* local_38;

        unsigned int uVar6 = 0;
        if (!spriteAtlas == nullptr) {
            iVar4 = ((NXTPixScreen*)spriteAtlas.operator->())->GetUIHeight();
            uVar6 = iVar4 * 65536 + 65536;
        }
        LRUHashCache<Font, 64ul, 65ul, false, unsigned long long>* local_98 =
            (LRUHashCache<Font, 64ul, 65ul, false, unsigned long long>*)&field_24;
        ReturnValue RVar7 = (ReturnValue)(long)(int)(uVar6 | arg1);
        local_80[0] = RVar7;
        auto this_01 = local_98->Find(local_80);
        bool cVar2 = this_01->operator_cast_to_bool();
        if (!cVar2) {
            this_02 = (shared_ptr*)GetFontMetricsFromID(arg1);
            cVar2 = shared_ptr::operator_cast_to_bool(this_02);
            if (cVar2) {
                local_48 = shared_ptr();
                pFVar5 = (FontMetrics*)(*this_02).operator->();
                cVar2 = pFVar5->IsSpriteFont();
                local_90 = RVar7;
                if (!cVar2) {
                    local_58 = shared_ptr();
                    this_03 = field_8;
                    local_38 = Js5Archive::JS5_TRUETYPEFONTS;
                    pFVar5 = (FontMetrics*)(*this_02).operator->();
                    uVar6 = pFVar5->GetSourcePackID();
                    Js5ResourceProvider::GetGroup(*this_03, local_58, (unsigned int)local_38,
                                                  (Priority*)(unsigned long)uVar6, (uint8_t)(Priority::HIGHEST), true);
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_58);
                    if (cVar2) {
                        local_38 = (VectorFontLoader*)local_58.Instance();
                        pFVar5 = (FontMetrics*)(*this_02).operator->();
                        iVar4 = pFVar5->GetSourcePackID();
                        pFVar5 = (FontMetrics*)(*this_02).operator->();
                        arg3 = pFVar5->GetPixelSize();
                        local_80 = local_38->CreateFontSource(iVar4, local_58, arg3);
                        this_03 = &local_80;
                        cVar2 = this_03->operator_cast_to_bool();
                        if (cVar2) {
                            local_a0 = this_03;
                            make_shared<Font, shared_ptr<FontMetrics> const&, VectorFontSource*, SpriteAtlasManager*&,
                                        shared_ptr<SpriteAtlas> const&>(&local_b0, (shared_ptr<FontMetrics>*)this_02,
                                                                        (VectorFontSource**)&local_a0, &field_0,
                                                                        spriteAtlas);
                            local_48 = local_b0;
                        }
                    }
                } else {
                    js5ArchiveSettings = field_8;
                    local_38 = Js5Archive::JS5_SPRITES;
                    local_88 = this_02;
                    pFVar5 = (FontMetrics*)(*this_02).operator->();
                    uVar6 = pFVar5->GetSourcePackID();
                    this_03 = (Js5ResourceProvider*)js5ArchiveSettings->_vptr;
                    uVar3 = (**(FileReady**)&this_03->field_48)((Js5ArchiveSettings*)js5ArchiveSettings,
                                                                (unsigned int)local_38, uVar6, nullptr,
                                                                (uint8_t)(Priority::HIGHEST));
                    if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) == DataStatus::READY) {
                        make_shared<Font, shared_ptr<FontMetrics> const&, SpriteAtlasManager*&,
                                    shared_ptr<SpriteAtlas> const&>(&local_80, (shared_ptr<FontMetrics>*)local_88,
                                                                    &field_0, spriteAtlas);
                        local_48 = local_80;
                    }
                }
                cVar2 = shared_ptr::operator_cast_to_bool(&local_48);
                if (cVar2) {
                    local_80[0] = local_90;
                    this_03 = (Js5ResourceProvider*)local_98->Put(local_48, 1, local_80);
                }
                if (cVar2) {
                    return this_03;
                }
            }
        }
        return this_01;
    }

} // namespace jag::graphics
