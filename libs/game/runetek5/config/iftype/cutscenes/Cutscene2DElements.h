// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DElements.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Cutscene2DAudioElement {
    public:
        ~Cutscene2DAudioElement();
        uint64_t LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2);
        Cutscene2DAudioElement(Cutscene2DAudioElement&& cutscene2DAudioElement);
        Cutscene2DAudioElement* operator=(Cutscene2DAudioElement&& cutscene2DAudioElement);
        Cutscene2DAudioElement();

    private:
        uint8_t _unknown_0[72];
        uint32_t field_72;
        uint8_t _unknown_76[4];
    };

    class Cutscene2DSubtitleElement {
    public:
        ~Cutscene2DSubtitleElement();
        uint64_t LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2);
        Cutscene2DSubtitleElement(Cutscene2DSubtitleElement&& cutscene2DSubtitleElement);
        Cutscene2DSubtitleElement* operator=(Cutscene2DSubtitleElement&& cutscene2DSubtitleElement);
        Cutscene2DSubtitleElement(const Cutscene2DSubtitleElement& cutscene2DSubtitleElement);
        Cutscene2DSubtitleElement();

    private:
        uint8_t _unknown_0[72];
        uint32_t field_72;
        uint32_t field_76;
        uint32_t field_80;
        uint8_t _unknown_84[4];
    };

    // 0x10052a380
    Cutscene2DImageElement::~Cutscene2DImageElement() {
        field_232.~Cutscene2DAnimation();
        field_176.~Cutscene2DAnimation();
        field_128.~Cutscene2DAnimation();
        field_80.~Cutscene2DAnimation();
    }

    // 0x10052e750
    Cutscene2DImageElement::Cutscene2DImageElement(Cutscene2DImageElement&& cutscene2DImageElement)
        : eastl::fixed_string<char, 32>(cutscene2DImageElement) {
        uint16_t uVar1 = cutscene2DImageElement.field_74;
        uint32_t uVar2 = cutscene2DImageElement.field_76;
        field_72 = cutscene2DImageElement.field_72;
        field_74 = uVar1;
        field_76 = uVar2;
        new (&field_80) Cutscene2DAnimation<float>(cutscene2DImageElement.field_80);
        new (&field_128) Cutscene2DAnimation<float>(cutscene2DImageElement.field_128);
        new (&field_176) Cutscene2DAnimation<math::Vector2T<float>>(cutscene2DImageElement.field_176);
        new (&field_232) Cutscene2DAnimation<math::Vector2T<float>>(cutscene2DImageElement.field_232);
    }

    // 0x10052f480
    Cutscene2DImageElement* Cutscene2DImageElement::operator=(Cutscene2DImageElement&& cutscene2DImageElement) {
        *this = cutscene2DImageElement;
        uint16_t uVar1 = cutscene2DImageElement.field_74;
        uint32_t uVar2 = cutscene2DImageElement.field_76;
        field_72 = cutscene2DImageElement.field_72;
        field_74 = uVar1;
        field_76 = uVar2;
        field_80 = cutscene2DImageElement.field_80;
        field_128 = cutscene2DImageElement.field_128;
        field_176 = cutscene2DImageElement.field_176;
        field_232 = cutscene2DImageElement.field_232;
        return this;
    }

    // 0x10052fdc0
    Cutscene2DAudioElement::Cutscene2DAudioElement(Cutscene2DAudioElement&& cutscene2DAudioElement)
        : eastl::fixed_string<char, 32>(cutscene2DAudioElement), field_72(cutscene2DAudioElement.field_72) {}

    // 0x10052feb0
    Cutscene2DAudioElement* Cutscene2DAudioElement::operator=(Cutscene2DAudioElement&& cutscene2DAudioElement) {
        *this = cutscene2DAudioElement;
        field_72 = cutscene2DAudioElement.field_72;
        return this;
    }

    // 0x100530620
    Cutscene2DSubtitleElement::Cutscene2DSubtitleElement(Cutscene2DSubtitleElement&& cutscene2DSubtitleElement)
        : eastl::fixed_string<char, 32>(cutscene2DSubtitleElement), field_80(cutscene2DSubtitleElement.field_80) {
        uint32_t uVar1 = cutscene2DSubtitleElement.field_76;
        field_72 = cutscene2DSubtitleElement.field_72;
        field_76 = uVar1;
    }

    // 0x100530720
    Cutscene2DSubtitleElement*
    Cutscene2DSubtitleElement::operator=(Cutscene2DSubtitleElement&& cutscene2DSubtitleElement) {
        *this = cutscene2DSubtitleElement;
        uint32_t uVar1 = cutscene2DSubtitleElement.field_76;
        field_72 = cutscene2DSubtitleElement.field_72;
        field_76 = uVar1;
        field_80 = cutscene2DSubtitleElement.field_80;
        return this;
    }

    // 0x10053df50
    Cutscene2DSubtitleElement::Cutscene2DSubtitleElement(const Cutscene2DSubtitleElement& cutscene2DSubtitleElement)
        : eastl::fixed_string<char, 32>(cutscene2DSubtitleElement), field_80(cutscene2DSubtitleElement.field_80) {
        uint32_t uVar1 = cutscene2DSubtitleElement.field_76;
        field_72 = cutscene2DSubtitleElement.field_72;
        field_76 = uVar1;
    }

    // 0x100542820
    Cutscene2DAudioElement::Cutscene2DAudioElement() : eastl::fixed_string<char, 32>() {}

} // namespace jag::game

namespace jag {
    // 0x10052ab60
    game::LocType::LocationSoundData* placement_new<game::LocType::LocationSoundData>(void* arg1) {
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 96) = 0;
        new (arg1) game::LocType::LocationSoundData();
        return arg1;
    }

    // 0x10052aba0
    MakeSharedPoolRefCounter<game::LocType::LocationSoundData, MakeSharedPool<game::LocType::LocationSoundData, 512>>*
    placement_new<MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                           MakeSharedPool<game::LocType::LocationSoundData, 512>>,
                  MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData*&,
                  game::LocType::LocationSoundData*>(
        void* arg1, MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData*& arg2,
        game::LocType::LocationSoundData*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                            MakeSharedPool<game::LocType::LocationSoundData, 512>>(arg2, arg3);
        return arg1;
    }

    // 0x10052bef0
    MakeSharedPoolRefCounter<game::LocType::LocationSoundData, MakeSharedPool<game::LocType::LocationSoundData, 512>>::
        MakeSharedPoolRefCounter(void* arg1, game::LocType::LocationSoundData* locationSoundData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7af8 + 16;
        *(void**)(this + 16) = arg1;
        *(LocationSoundData**)(this + 24) = locationSoundData;
    }

    // 0x10052bf30
    void MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                  MakeSharedPool<game::LocType::LocationSoundData, 512>>::DeleteData() {
        if (*(LocationSoundData**)(this + 24) != nullptr) {
            (*(LocationSoundData**)(this + 24))->~LocationSoundData();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10052bf60
    void MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                  MakeSharedPool<game::LocType::LocationSoundData, 512>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::LocType::LocationSoundData, 512>::deallocate(arg1);
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x10052cdc0
    function<void(unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>::~function() {
        if (operator_cast_to_bool() != '\0') {
            destruct(this);
        }
    }

    // 0x10052cdf0
    void function<void(unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>::destruct() {
        (**(void (**)(...))(this + 88))(this + 16);
    }

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x10052cd70
    Vector2T<float>::Vector2T(PacketT<Array<unsigned char>>& arg1, bool arg2) {
        uint32_t in_register_00000011;
        float fVar1;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            fVar1 = arg1.gT<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gT<float>();
        } else {
            fVar1 = arg1.gTPE<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gTPE<float>();
        }
        *(float*)(this + 4) = fVar1;
    }

} // namespace jag::math
