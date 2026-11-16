// libs/graphics/runetek7/animation/asm/AnimationDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationDescriptor.h"

namespace jag::graphics {
    // 0x100f3e350, 336 bytes, __data
    AnimationDescriptor::m_basAnimTypeNames = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x10011cd30: the linker folded this into oldscape::configdecoder::NPCTypeCustomisation::UsePlayerModel() const, which has identical code
    AnimationDescriptor::GetTweenLastFrameToFirst() const;

    // 0x10012dc00: the linker folded this into oldscape::graphics::NXTPixScreen::GetViewportX(), which has identical code
    AnimationDescriptor::GetBasAnimType() const;

    // 0x10016b4a0: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const, which has identical code
    AnimationDescriptor::GetSeqID() const;

    // 0x1001cd990: the linker folded this into PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    AnimationDescriptor::GetOnFinishedCallback() const;

    // 0x10043b780: the linker folded this into game::StaticPointLight::GetLightTypeToLoad() const, which has identical code
    AnimationDescriptor::GetLoopLength() const;

    // 0x100954120, 144 bytes, base-object constructor, placed by class name and debug map
    // AnimationDescriptor::AnimationDescriptor(Json::Value const&)
    void AnimationDescriptor::AnimationDescriptor(Value* param_1) {
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>();
        field_72 = 21;
        field_76 = 4294967295;
        field_80 = 0;
        m_loopLength = 4294967295;
        field_88 = true;
        new (&field_96) math::Vector2T<int>();
        field_192 = false;
        new (&field_200) eastl::string();
        ReadFromJson(this, param_1);
    }

    // 0x1009541b0, 528 bytes, placed by class name and debug map
    // AnimationDescriptor::ReadFromJson(Json::Value const&)
    void AnimationDescriptor::ReadFromJson(Value* param_1) {
        char cVar1;
        bool bVar2;
        undefined4 uVar3;
        Value* pVVar4;
        char* pcVar5;
        char* extraout_RDX;
        char* extraout_RDX_00;
        char* extraout_RDX_01;
        eastl::string local_68[32];
        allocator local_48[24];

        cVar1 = Json::Value::isMember(param_1, "SeqID");
        if (cVar1 != '\0') {
            Json::Value::operator[](param_1, "SeqID");
            uVar3 = Json::Value::asInt();
            field_76 = uVar3;
        }
        cVar1 = Json::Value::isMember(param_1, "BasAnimType");
        if (cVar1 != '\0') {
            pVVar4 = (Value*)Json::Value::operator[](param_1, "BasAnimType");
            pcVar5 = (char*)Json::Value::asCString(pVVar4);
            eastl::allocator::allocator(local_48, "EASTL basic_string");
            eastl::string::basic_string(local_68, pcVar5, local_48);
            uVar3 = BasAnimTypeFromString((basic_string*)local_68);
            field_72 = uVar3;
            eastl::string::~basic_string(local_68);
        }
        pVVar4 = (Value*)Json::Value::operator[](param_1, "LoopBehaviour");
        pcVar5 = (char*)Json::Value::asCString(pVVar4);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_68, pcVar5, local_48);
        bVar2 = eastl::operator==((eastl*)local_68, (basic_string*)"Never", extraout_RDX);
        if (bVar2) {
            field_80 = 2;
        } else {
            bVar2 = eastl::operator==((eastl*)local_68, (basic_string*)"Default", extraout_RDX_00);
            if (bVar2) {
                field_80 = 0;
            } else {
                bVar2 = eastl::operator==((eastl*)local_68, (basic_string*)"Always", extraout_RDX_01);
                if (!bVar2) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/animation/asm/AnimationDescriptor.cpp",
                                    65, (char*)0);
                }
                field_80 = 1;
            }
        }
        pVVar4 = (Value*)Json::Value::operator[](param_1, "LoopLength");
        pcVar5 = (char*)Json::Value::asCString(pVVar4);
        std::string::string<decltype(nullptr)>((string*)local_48, pcVar5);
        bVar2 = std::operator==((string*)local_48, pcVar5);
        uVar3 = 2147483647;
        if (!bVar2) {
            uVar3 = std::stoi((string*)local_48, (ulong*)0, 10);
        }
        m_loopLength = uVar3;
        pVVar4 = (Value*)Json::Value::operator[](param_1, "TweenLastFrameToFirst");
        bVar2 = (bool)Json::Value::asBool(pVVar4);
        field_88 = bVar2;
        local_48->~string();
        eastl::string::~basic_string(local_68);
    }

    // 0x1009543c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnimationDescriptor::AnimationDescriptor(Json::Value const&): jumps straight to the base-object constructor

    // 0x1009543d0, 128 bytes, placed by class name and debug map
    // AnimationDescriptor::BasAnimTypeFromString(eastl::string const&)
    void AnimationDescriptor::BasAnimTypeFromString(basic_string* param_1) {
        StringView* pSVar1;
        undefined8 uVar2;
        StringView local_28;

        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_28,
                                                                                      (fixed_string*)param_1);
        pSVar1 = eastl::find<StringView_const*, StringView,
                             AnimationDescriptor::BasAnimTypeFromString(eastl::stringconst&)::__0>(&local_28);
        if (pSVar1 == (StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 336)) {
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "animation/asm/AnimationDescriptor.cpp",
                            32, "Unknown bas animation type: %s", uVar2);
        }
        std::distance<StringView_const*>(pSVar1, (StringView*)param_1);
    }

    // 0x100954540, 320 bytes, base-object constructor, placed by class name and debug map
    // AnimationDescriptor::AnimationDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void AnimationDescriptor::AnimationDescriptor(PacketT* param_1) {
        char cVar1;
        undefined4 uVar2;
        int iVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_48[32];

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>();
        field_72 = 21;
        field_76 = 4294967295;
        field_80 = 0;
        m_loopLength = 4294967295;
        field_88 = true;
        new (&field_96) math::Vector2T<int>();
        field_192 = false;
        new (&field_200) eastl::string();
        uVar2 = param_1->g4s();
        field_76 = uVar2;
        uVar2 = param_1->g4s();
        field_72 = uVar2;
        uVar2 = param_1->g4s();
        field_80 = uVar2;
        uVar2 = param_1->g4s();
        m_loopLength = uVar2;
        cVar1 = param_1->g1();
        field_88 = cVar1 != '\0';
        cVar1 = param_1->g1();
        field_192 = cVar1 != '\0';
        if (cVar1 != '\0') {
            iVar3 = param_1->g4();
            if (iVar3 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("onFinishedFuncType == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/AnimationDescriptor.cpp",
                          97, (char*)0);
            }
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_48, SUB81(param_1, 0));
            eastl::string::operator=((eastl::string*)&field_200, (basic_string*)local_48);
            local_48->~basic_string();
            uVar2 = param_1->g4();
            field_232 = uVar2;
        }
    }

    // 0x100954680, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnimationDescriptor::AnimationDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100954690, 160 bytes, placed by class name and debug map
    // AnimationDescriptor::InitialiseCallbackFunctions(VariableList&)
    void AnimationDescriptor::InitialiseCallbackFunctions(VariableList* param_1) {
        __1 local_98;
        AnimationDescriptor* local_90;
        function<void(), 64ul, 16ul, (fixedfunction::Methods)0> local_88[104];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_192 != false) {
            local_98.field_0 = (char*)param_1;
            local_90 = this;
            fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                AnimationDescriptor::InitialiseCallbackFunctions(VariableList&)::__1, void>(local_88, &local_98);
            fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::operator=(
                (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)&field_96, (function*)local_88);
            fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(local_88);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100954740, 1600 bytes, placed by class name and debug map
    // AnimationDescriptor::ToString(unsigned int) const
    AnimationDescriptor* AnimationDescriptor::ToString(uint param_1) {
        int iVar1;
        bool bVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        uint in_EDX;
        char* pcVar4;
        undefined4 in_register_00000034;
        long lVar5;
        eastl::string local_128[32];
        eastl::string local_108[32];
        allocator local_e8[32];
        debug_helpers local_c8[32];
        eastl local_a8[32];
        eastl local_88[32];
        eastl local_68[32];
        eastl local_48[32];

        lVar5 = CONCAT44(in_register_00000034, param_1);
        eastl::string::basic_string(local_108);
        iVar1 = *(int*)(lVar5 + 80);
        if (iVar1 == 2) {
            eastl::string::assign(local_108, "Never");
        } else if (iVar1 == 1) {
            eastl::string::assign(local_108, "Always");
        } else if (iVar1 == 0) {
            eastl::string::assign(local_108, "Default");
        }
        if ((long)*(int*)(lVar5 + 72) == 21) {
            pcVar4 = "None";
        } else {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<StringView, 21ul>::operator[]((long)*(int*)(lVar5 + 72));
            pcVar4 = (char*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        }
        eastl::allocator::allocator(local_e8, "EASTL basic_string");
        eastl::string::basic_string(local_128, pcVar4, local_e8);
        local_e8->GetTabbedSpaces(in_EDX);
        local_c8->GetTabbedSpaces(in_EDX + 1);
        new (this) eastl::string();
        eastl::operator+(local_48, (basic_string*)local_e8, (value_type*)"Animation\n");
        eastl::string::operator=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        eastl::operator+(local_48, (basic_string*)local_e8, (value_type*)"{\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        eastl::operator+(local_68, (basic_string*)local_c8, (value_type*)"Animation ID: ");
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            pcVar4 = "<Empty>";
        }
        eastl::operator+(local_88, (basic_string*)local_68, (value_type*)pcVar4);
        eastl::operator+(local_48, (basic_string*)local_88, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        local_88->~basic_string();
        local_68->~basic_string();
        eastl::operator+(local_68, (basic_string*)local_c8, (value_type*)"BasAnimType: ");
        eastl::operator+(local_88, (basic_string*)local_68, (basic_string*)local_128);
        eastl::operator+(local_48, (basic_string*)local_88, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        local_88->~basic_string();
        local_68->~basic_string();
        eastl::operator+(local_68, (basic_string*)local_c8, (value_type*)"Seq ID: ");
        eastl::to_string(local_a8, *(int*)(lVar5 + 76));
        eastl::operator+(local_88, (basic_string*)local_68, (basic_string*)local_a8);
        eastl::operator+(local_48, (basic_string*)local_88, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        local_88->~basic_string();
        local_a8->~basic_string();
        local_68->~basic_string();
        eastl::operator+(local_68, (basic_string*)local_c8, (value_type*)"Loop type: ");
        eastl::operator+(local_88, (basic_string*)local_68, (basic_string*)local_108);
        eastl::operator+(local_48, (basic_string*)local_88, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        local_88->~basic_string();
        local_68->~basic_string();
        eastl::operator+(local_68, (basic_string*)local_c8, (value_type*)"Loop length: ");
        eastl::to_string(local_a8, *(int*)(lVar5 + 84));
        eastl::operator+(local_88, (basic_string*)local_68, (basic_string*)local_a8);
        eastl::operator+(local_48, (basic_string*)local_88, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        local_88->~basic_string();
        local_a8->~basic_string();
        local_68->~basic_string();
        eastl::operator+(local_68, (basic_string*)local_c8, (value_type*)"Tween last frame to first: ");
        eastl::to_string(local_a8, (uint) * (byte*)(lVar5 + 88));
        eastl::operator+(local_88, (basic_string*)local_68, (basic_string*)local_a8);
        eastl::operator+(local_48, (basic_string*)local_88, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        local_88->~basic_string();
        local_a8->~basic_string();
        local_68->~basic_string();
        eastl::operator+(local_68, (basic_string*)local_c8, (value_type*)"Has OnFinished func: ");
        bVar3 = ((lVar5 + 96))->operator_cast_to_bool();
        pcVar4 = "False";
        if (bVar3) {
            pcVar4 = "True";
        }
        eastl::operator+(local_88, (basic_string*)local_68, (value_type*)pcVar4);
        eastl::operator+(local_48, (basic_string*)local_88, (value_type*)&DAT_100e3824c);
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        local_88->~basic_string();
        local_68->~basic_string();
        eastl::operator+(local_48, (basic_string*)local_e8, (value_type*)"}\n");
        eastl::string::operator+=((eastl::string*)this, (basic_string*)local_48);
        local_48->~basic_string();
        local_c8->~basic_string();
        local_e8->~basic_string();
        eastl::string::~basic_string(local_128);
        eastl::string::~basic_string(local_108);
        return this;
    }

    // 0x100966040, 48 bytes, placed by class name
    // AnimationDescriptor::InitialiseCallbackFunctions(VariableList&)::$_1::operator()() const
    /* AnimationDescriptor::InitialiseCallbackFunctions(VariableList&)::$_1::TEMPNAMEPLACEHOLDERVALUE()
   const */

    void AnimationDescriptor::InitialiseCallbackFunctions(VariableList&)::$_1::operator()() {
        char* pcVar1;
        uint uVar2;

        pcVar1 = field_0;
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        VariableList::SetUintVariable(pcVar1, uVar2);
    }

} // namespace jag::graphics
