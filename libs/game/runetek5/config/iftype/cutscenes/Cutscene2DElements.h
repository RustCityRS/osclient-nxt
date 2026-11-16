// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DElements.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Cutscene2DAudioElement {
    public:
        ~Cutscene2DAudioElement();
        LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        Cutscene2DAudioElement(Cutscene2DAudioElement&&);
        Cutscene2DAudioElement* operator=(Cutscene2DAudioElement&&);
        Cutscene2DAudioElement();

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[72];
        undefined4 field_72; // offset 72
        char _unknown_76[4];
    };

    class Cutscene2DSubtitleElement {
    public:
        ~Cutscene2DSubtitleElement();
        LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        Cutscene2DSubtitleElement(Cutscene2DSubtitleElement&&);
        Cutscene2DSubtitleElement* operator=(Cutscene2DSubtitleElement&&);
        Cutscene2DSubtitleElement(Cutscene2DSubtitleElement const&);
        Cutscene2DSubtitleElement();

        // data members, from how the methods use this: 88 bytes
        char _unknown_0[72];
        undefined4 field_72; // offset 72
        undefined4 field_76; // offset 76
        undefined4 field_80; // offset 80
        char _unknown_84[4];
    };

    // 0x10052a370, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Cutscene2DImageElement::~Cutscene2DImageElement(): jumps straight to the base-object destructor

    // 0x10052a380, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Cutscene2DImageElement::~Cutscene2DImageElement()
    void Cutscene2DImageElement::~Cutscene2DImageElement() {
        (&field_232)->~Cutscene2DAnimation();
        (&field_176)->~Cutscene2DAnimation();
        (&field_128)->~Cutscene2DAnimation();
        (&field_80)->~Cutscene2DAnimation();
        /* WARNING: Subroutine does not return */
        ~fixed_string();
    }

    // 0x10052e710, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Cutscene2DImageElement::Cutscene2DImageElement(Cutscene2DImageElement&&): jumps straight to the base-object constructor

    // 0x10052e750, 208 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Cutscene2DImageElement::Cutscene2DImageElement(Cutscene2DImageElement&&)
    void Cutscene2DImageElement::Cutscene2DImageElement(Cutscene2DImageElement* param_1) {
        undefined2 uVar1;
        undefined4 uVar2;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        uVar1 = param_1->field_74;
        uVar2 = param_1->field_76;
        field_72 = param_1->field_72;
        field_74 = uVar1;
        field_76 = uVar2;
        new (&field_80, (Cutscene2DAnimation*)&param_1->field_80) Cutscene2DAnimation<float>();
        new (&field_128, (Cutscene2DAnimation*)&param_1->field_128) Cutscene2DAnimation<float>();
        new (&field_176, (Cutscene2DAnimation*)&param_1->field_176) Cutscene2DAnimation<math::Vector2T<float>>();
        new (&field_232, (Cutscene2DAnimation*)&param_1->field_232) Cutscene2DAnimation<math::Vector2T<float>>();
    }

    // 0x10052f480, 112 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DImageElement::operator=(Cutscene2DImageElement&&)
    /* Cutscene2DImageElement::TEMPNAMEPLACEHOLDERVALUE(Cutscene2DImageElement&&)
    */

    Cutscene2DImageElement* Cutscene2DImageElement::operator=(Cutscene2DImageElement* param_1) {
        undefined2 uVar1;
        undefined4 uVar2;

        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)this, (fixed_string*)param_1);
        uVar1 = param_1->field_74;
        uVar2 = param_1->field_76;
        field_72 = param_1->field_72;
        field_74 = uVar1;
        field_76 = uVar2;
        Cutscene2DAnimation<float>::operator=((Cutscene2DAnimation<float>*)&field_80,
                                              (Cutscene2DAnimation*)&param_1->field_80);
        Cutscene2DAnimation<float>::operator=((Cutscene2DAnimation<float>*)&field_128,
                                              (Cutscene2DAnimation*)&param_1->field_128);
        Cutscene2DAnimation<math::Vector2T<float>>::operator=((Cutscene2DAnimation<math::Vector2T<float>>*)&field_176,
                                                              (Cutscene2DAnimation*)&param_1->field_176);
        Cutscene2DAnimation<math::Vector2T<float>>::operator=((Cutscene2DAnimation<math::Vector2T<float>>*)&field_232,
                                                              (Cutscene2DAnimation*)&param_1->field_232);
        return this;
    }

    // 0x10052fd90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Cutscene2DAudioElement::Cutscene2DAudioElement(Cutscene2DAudioElement&&): jumps straight to the base-object constructor

    // 0x10052fdc0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Cutscene2DAudioElement::Cutscene2DAudioElement(Cutscene2DAudioElement&&)
    void Cutscene2DAudioElement::Cutscene2DAudioElement(Cutscene2DAudioElement* param_1) {
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        field_72 = param_1->field_72;
    }

    // 0x10052feb0, 48 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DAudioElement::operator=(Cutscene2DAudioElement&&)
    /* Cutscene2DAudioElement::TEMPNAMEPLACEHOLDERVALUE(Cutscene2DAudioElement&&)
    */

    Cutscene2DAudioElement* Cutscene2DAudioElement::operator=(Cutscene2DAudioElement* param_1) {
        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)this, (fixed_string*)param_1);
        field_72 = param_1->field_72;
        return this;
    }

    // 0x100530610, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Cutscene2DSubtitleElement::Cutscene2DSubtitleElement(Cutscene2DSubtitleElement&&): jumps straight to the base-object constructor

    // 0x100530620, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Cutscene2DSubtitleElement::Cutscene2DSubtitleElement(Cutscene2DSubtitleElement&&)
    void Cutscene2DSubtitleElement::Cutscene2DSubtitleElement(Cutscene2DSubtitleElement* param_1) {
        undefined4 uVar1;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        field_80 = param_1->field_80;
        uVar1 = param_1->field_76;
        field_72 = param_1->field_72;
        field_76 = uVar1;
    }

    // 0x100530720, 48 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DSubtitleElement::operator=(Cutscene2DSubtitleElement&&)
    /* Cutscene2DSubtitleElement::TEMPNAMEPLACEHOLDERVALUE(Cutscene2DSubtitleElement&&)
    */

    Cutscene2DSubtitleElement* Cutscene2DSubtitleElement::operator=(Cutscene2DSubtitleElement* param_1) {
        undefined4 uVar1;

        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)this, (fixed_string*)param_1);
        uVar1 = param_1->field_76;
        field_72 = param_1->field_72;
        field_76 = uVar1;
        field_80 = param_1->field_80;
        return this;
    }

    // 0x10053b370, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Cutscene2DSubtitleElement::Cutscene2DSubtitleElement(Cutscene2DSubtitleElement const&): jumps straight to the base-object constructor

    // 0x10053df50, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // Cutscene2DSubtitleElement::Cutscene2DSubtitleElement(Cutscene2DSubtitleElement const&)
    void Cutscene2DSubtitleElement::Cutscene2DSubtitleElement(Cutscene2DSubtitleElement* param_1) {
        undefined4 uVar1;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        field_80 = param_1->field_80;
        uVar1 = param_1->field_76;
        field_72 = param_1->field_72;
        field_76 = uVar1;
    }

    // 0x100542810, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Cutscene2DAudioElement::Cutscene2DAudioElement(): jumps straight to the base-object constructor

    // 0x100542820, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Cutscene2DAudioElement::Cutscene2DAudioElement()
    /* Cutscene2DSubtitleElement::Cutscene2DSubtitleElement() */

    void Cutscene2DSubtitleElement::Cutscene2DSubtitleElement() {
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>();
    }

} // namespace jag::game

namespace jag {
    // 0x10052ab60, 64 bytes, inline, placed by debug map only (low confidence)
    // game::LocType::LocationSoundData* placement_new<game::LocType::LocationSoundData>(void*)
    LocationSoundData* placement_new<game::LocType::LocationSoundData>(void* param_1) {
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 96) = 0;
        game::LocType::LocationSoundData::LocationSoundData(param_1);
        return param_1;
    }

    // 0x10052aba0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType::LocationSoundData, MakeSharedPool<game::LocType::LocationSoundData, 512> >* placement_new<MakeSharedPoolRefCounter<game::LocType::LocationSoundData, MakeSharedPool<game::LocType::LocationSoundData, 512> >, MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData*&, game::LocType::LocationSoundData*>(void*, MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData*&, game::LocType::LocationSoundData*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                                MakeSharedPool<game::LocType::LocationSoundData, 512>>,
                       MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData*&,
                       game::LocType::LocationSoundData*>(void* param_1, RefCounterAndData** param_2,
                                                          LocationSoundData** param_3) {
        MakeSharedPoolRefCounter<
            game::LocType::LocationSoundData,
            MakeSharedPool<game::LocType::LocationSoundData, 512>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x10052bee0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType::LocationSoundData, MakeSharedPool<game::LocType::LocationSoundData, 512> >::MakeSharedPoolRefCounter(void*, game::LocType::LocationSoundData*): jumps straight to the base-object constructor

    // 0x10052bef0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType::LocationSoundData, MakeSharedPool<game::LocType::LocationSoundData, 512> >::MakeSharedPoolRefCounter(void*, game::LocType::LocationSoundData*)
    void jag::MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                       MakeSharedPool<game::LocType::LocationSoundData, 512>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                                          MakeSharedPool<game::LocType::LocationSoundData, 512>>* this,
                                 void* param_1, LocationSoundData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7af8 + 16;
        *(void**)(this + 16) = param_1;
        *(LocationSoundData**)(this + 24) = param_2;
    }

    // 0x10052bf30, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType::LocationSoundData, MakeSharedPool<game::LocType::LocationSoundData, 512> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                       MakeSharedPool<game::LocType::LocationSoundData, 512>>::
        DeleteData(MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                            MakeSharedPool<game::LocType::LocationSoundData, 512>>* this) {
        if (*(LocationSoundData**)(this + 24) != (LocationSoundData*)0) {
            (*(LocationSoundData**)(this + 24))->~LocationSoundData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10052bf60, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType::LocationSoundData, MakeSharedPool<game::LocType::LocationSoundData, 512> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                       MakeSharedPool<game::LocType::LocationSoundData, 512>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::LocType::LocationSoundData,
                                            MakeSharedPool<game::LocType::LocationSoundData, 512>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::LocType::LocationSoundData, 512>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::math {
    // 0x10052cb70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Vector2T(PacketT<Array<unsigned char, eastl::allocator> >&, bool): jumps straight to the base-object constructor

    // 0x10052cd70, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Vector2T(PacketT<Array<unsigned char, eastl::allocator> >&, bool)
    void Vector2T<float>::Vector2T(PacketT* param_1, bool param_2) {
        undefined3 in_register_00000011;
        float fVar1;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        } else {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        }
        *(float*)(this + 4) = fVar1;
    }

} // namespace jag::math

namespace jag::fixedfunction {
    // 0x10052cdc0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // function<void (unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>::~function()
    /* function<void (), 64ul, 16ul, (Methods)0>::~function() */

    void function<void(), 64ul, 16ul, (Methods)0>::~function(function<void(), 64ul, 16ul, (Methods)0>* this) {
        if (operator_cast_to_bool()) {
            destruct(this);
        }
    }

    // 0x10052cdf0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>::destruct()
    /* function<void (), 64ul, 16ul, (Methods)0>::destruct() */

    void function<void(), 64ul, 16ul, (Methods)0>::destruct(function<void(), 64ul, 16ul, (Methods)0>* this) {
        (**(code**)(this + 88))(this + 16);
    }

} // namespace jag::fixedfunction
