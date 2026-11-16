// libs/graphics/runetek7/fonts/FontSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class FontSystem {
    public:
        FontSystem(GUIManager& guiManager, const shared_ptr<FontManager>& fontManager);
        bool LoadFont(Js5ResourceProvider* js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings, int arg3);
        void Destroy();

    private:
        int field_0;
        uint8_t _unknown_4[4];
        shared_ptr field_8;
        uint8_t _unknown_24[16];
        shared_ptr field_40;
    };

    class TextFlags {
    public:
        TextFlags();
        auto SetFlag(Flag flag);
        bool HasFlag(Flag flag) const;
        TextFlags(std::initializer_list<Flag> initializer_list);
        TextFlags(Flag flag, bool arg2);
        auto ClearFlag(Flag flag);
        TextFlags* SetFlag(Flag flag, bool arg2);
        static TextFlags DEFAULT; // = TextFlags()

    private:
        uint8_t field_0;
    };

    // 0x1008e2d40
    auto TextFlags::SetFlag(TextFlags::Flag flag) {
        auto result;
        result = result | (uint8_t)flag;
        return result;
    }

    // 0x1008e3750
    bool TextFlags::HasFlag(TextFlags::Flag flag) const {
        return ((field_0 ^ 255) & flag) == 0;
    }

    // 0x1008e7c80
    FontSystem::FontSystem(GUIManager& guiManager, const shared_ptr<FontManager>& fontManager) : field_0(-1) {
        ReturnValue local_40;

        new (&field_24) shared_ptr();
        uint8_t* this_01 = field_40;
        new (this_01) shared_ptr();
        field_24 = fontManager;
        make_shared<FontHelpers>(&local_40);
        *this_01 = local_40;
        ((FontHelpers*)(*this_01).operator->())->Initialise(guiManager);
    }

    // 0x1008e7eb0
    bool FontSystem::LoadFont(Js5ResourceProvider* js5ResourceProvider, const Js5ArchiveSettings& js5ArchiveSettings,
                              int arg3) {
        int arg1;
        bool cVar1;
        uint8_t uVar2;
        uint64_t extraout_var;
        Array<unsigned int>* this_00;
        int* piVar3;
        FontManager* this_01;
        shared_ptr<Font>* font;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        GeometryBatchInstance* local_38;

        if (js5ResourceProvider != nullptr) {
            if (field_0 == arg3) {
                cVar1 = field_8->operator_cast_to_bool();
                if (cVar1)
                    goto LAB_1008e7f76;
            }
            local_38 = nullptr;
            uVar2 = js5ResourceProvider->GetIndex((Js5ArchiveSettings*)&local_38);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) == DataStatus::READY) {
                this_00 = (Array<unsigned int>*)local_38->GetMaterial();
                piVar3 = (int*)(*this_00)[(long)arg3];
                arg1 = *piVar3;
                this_01 = (FontManager*)field_24.operator->();
                local_48 = shared_ptr();
                font = (shared_ptr<Font>*)this_01->GetFont(arg1, local_48);
                *field_8 = *font;
                cVar1 = field_8->operator_cast_to_bool();
                if (cVar1) {
                    field_0 = arg3;
                }
            }
        }
    LAB_1008e7f76:
        return field_0 != -1;
    }

    // 0x1008e8020
    void FontSystem::Destroy() {
        field_8->reset();
        uint8_t* this_00 = field_40;
        if (this_00->operator_cast_to_bool() != '\0') {
            (*this_00).operator->();
            FontHelpers::Shutdown();
            this_00->reset();
        }
        field_0 = -1;
    }

    // 0x1008e80f0
    TextFlags::TextFlags(std::initializer_list<TextFlags::Flag> initializer_list) : field_0(0) {
        initializer_list<TextFlags::Flag>* local_28 = initializer_list;
        for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
        }
    }

    // 0x1008e81f0
    auto TextRunSlice::Slice(unsigned long arg1, unsigned long arg2) const {
        auto result;
        TextRunCharacter* textRunCharacter2;
        TextRunCharacter* textRunCharacter1;
        bool arg4;
        TextRun* textRun;

        unsigned long uVar2 = GetCodepointCount();
        if (((IsEmpty() == '\0') && (arg1 <= uVar2)) && (arg2 <= uVar2)) {
            if (arg2 < arg1) {
                std::swap<unsigned long>(arg1, arg2);
            }
            textRun = field_0;
            textRunCharacter1 = field_8 + arg1 * 12;
            textRunCharacter2 = field_8 + arg2 * 12;
            arg4 = arg2 == uVar2 && field_24 != false;
        } else {
            textRun = field_0;
            textRunCharacter1 = nullptr;
            textRunCharacter2 = nullptr;
            arg4 = false;
        }
        TextRunSlice(&result, textRun, textRunCharacter1, textRunCharacter2, arg4);
        return result;
    }

    // 0x1008e82a0
    void TextRunSlice::GetCodepointCount() const {
        std::distance<TextRunCharacter const*>(field_8, field_16);
    }

    // 0x1008e82f0
    TextRunCharacter* TextRunSlice::back() const {
        if (IsEmpty() != '\0') {
            LogAssert("!IsEmpty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.h",
                      81, nullptr);
        }
        return field_16 - 12;
    }

    // 0x100904780
    TextFlags::TextFlags(TextFlags::Flag flag, bool arg2) : field_0(0) {
        SetFlag(flag, arg2);
    }

    // 0x100904790
    TextFlags* TextFlags::SetFlag(TextFlags::Flag flag, bool arg2) {
        uint32_t in_register_00000011;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            ClearFlag((ReturnValue*)this, flag);
        } else {
            SetFlag((ReturnValue*)this, flag);
        }
        return this;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008e7d90
    shared_ptr_if_not_array<graphics::FontHelpers>::type make_shared<graphics::FontHelpers>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        FontHelpers* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::FontHelpers>::type result;
        } else {
            local_28[0] = placement_new<graphics::FontHelpers>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::FontHelpers>, int, graphics::FontHelpers*&>(arg1, &local_2c,
                                                                                                       local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x1008e8cb0
    bool function<bool(unsigned int), 64ul, 16ul, (Methods)0>::operator()<unsigned int&>(unsigned int& arg1) const {
        uint8_t uVar1 = (**(void (**)(...))this)(this + 16, arg1);
        return (bool)uVar1;
    }

} // namespace jag::fixedfunction
