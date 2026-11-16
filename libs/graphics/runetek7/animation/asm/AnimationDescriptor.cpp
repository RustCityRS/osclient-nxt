// libs/graphics/runetek7/animation/asm/AnimationDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationDescriptor.h"

namespace jag::graphics {
    // 0x100f3e350
    float AnimationDescriptor::m_basAnimTypeNames[84] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x10011cd30: AnimationDescriptor::GetTweenLastFrameToFirst() const has the same machine code as oldscape::configdecoder::NPCTypeCustomisation::UsePlayerModel() const

    // 0x10012dc00: AnimationDescriptor::GetBasAnimType() const has the same machine code as oldscape::graphics::NXTPixScreen::GetViewportX()

    // 0x10016b4a0: AnimationDescriptor::GetSeqID() const has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const

    // 0x1001cd990: AnimationDescriptor::GetOnFinishedCallback() const has the same machine code as PointLightIndicesEffect::GetVisiblePointLights()

    // 0x10043b780: AnimationDescriptor::GetLoopLength() const has the same machine code as game::StaticPointLight::GetLightTypeToLoad() const

    // 0x100954120
    AnimationDescriptor::AnimationDescriptor(const Json::Value& value)
        : eastl::fixed_string<char, 32>(), m_basAnimType(21), m_seqID(4294967295), m_loopBehaviour(0),
          m_loopLength(4294967295), m_tweenLastFrameToFirst(true), field_192(false) {
        ReadFromJson(value);
    }

    // 0x1009541b0
    void AnimationDescriptor::ReadFromJson(const Json::Value& value) {
        Value* pVVar6;
        eastl::string* str;

        if (value.isMember("SeqID")) {
            pVVar6 = &value["SeqID"];
            m_seqID = pVVar6->asInt();
        }
        if (value.isMember("BasAnimType")) {
            pVVar6 = &value["BasAnimType"];
            str = (eastl::string*)pVVar6->asCString();
            local_68 = eastl::string(str);
            m_basAnimType = BasAnimTypeFromString(&local_68, str);
        }
        pVVar6 = &value["LoopBehaviour"];
        auto pcVar7 = pVVar6->asCString();
        eastl::string local_68(pcVar7);
        if (!(local_68 == "Never")) {
            if (!(local_68 == "Default")) {
                if (!(local_68 == "Always")) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/animation/asm/AnimationDescriptor.cpp",
                                    65, nullptr);
                }
                m_loopBehaviour = 1;
            } else {
                m_loopBehaviour = 0;
            }
        } else {
            m_loopBehaviour = 2;
        }
        pVVar6 = &value["LoopLength"];
        pcVar7 = pVVar6->asCString();
        std::string::string<decltype(nullptr)>(&local_48, pcVar7);
        bool bVar2 = &local_48 == pcVar7;
        uint32_t uVar5 = 2147483647;
        if (!bVar2) {
            uVar5 = std::stoi(&local_48, nullptr, 10);
        }
        m_loopLength = uVar5;
        pVVar6 = &value["TweenLastFrameToFirst"];
        bVar2 = (bool)pVVar6->asBool();
        m_tweenLastFrameToFirst = bVar2;
        std::string::~string(&local_48);
    }

    // 0x1009543d0
    void AnimationDescriptor::BasAnimTypeFromString(const eastl::string& str) {
        uint64_t uVar1;
        __0* in_RCX;
        StringView* stringView3;
        StringView local_28;

        local_28.StringView<eastl::fixed_string<char, 40>>(*this);
        StringView* stringView1 =
            eastl::find<StringView const*, StringView, (eastl::stringconst&)->BasAnimTypeFromString()::__0>(
                &local_28, (StringView*)this, stringView3, in_RCX);
        if (stringView1 == (StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 336)) {
            uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "animation/asm/AnimationDescriptor.cpp",
                            32, "Unknown bas animation type: %s", uVar1);
        }
        std::distance<StringView const*>(stringView1, this);
    }

    // 0x100954540
    AnimationDescriptor::AnimationDescriptor(PacketT<Array<unsigned char>>& arg1)
        : eastl::fixed_string<char, 32>(), m_basAnimType(21), m_seqID(4294967295), m_loopBehaviour(0),
          m_loopLength(4294967295), m_tweenLastFrameToFirst(true), field_192(false) {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_48;

        m_seqID = arg1.g4s();
        int iVar3 = arg1.g4s();
        m_basAnimType = iVar3;
        iVar3 = arg1.g4s();
        m_loopBehaviour = iVar3;
        uint32_t uVar4 = arg1.g4s();
        m_loopLength = uVar4;
        char cVar1 = arg1.g1();
        m_tweenLastFrameToFirst = cVar1;
        cVar1 = arg1.g1();
        field_192 = cVar1;
        if (cVar1) {
            iVar3 = arg1.g4();
            if (iVar3 != 0) {
                LogAssert("onFinishedFuncType == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/AnimationDescriptor.cpp",
                          97, nullptr);
            }
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_48,
                                                                                                 (uint8_t)arg1);
            field_200 = &local_48;
            uVar4 = arg1.g4();
            field_232 = uVar4;
        }
    }

    // 0x100954690
    void AnimationDescriptor::InitialiseCallbackFunctions(VariableList& variableList) {
        __1 local_98;
        function<void(), 64ul, 16ul, (fixedfunction::Methods)0> local_88[104];
        long local_20;

        if (field_192 != false) {
            local_98.field_0 = variableList;
            local_98.field_8 = (long)this;
            fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                AnimationDescriptor::InitialiseCallbackFunctions(VariableList&)::__1, void>(local_88, &local_98);
            field_96 = *local_88;
        }
    }

    // 0x100954740
    auto AnimationDescriptor::ToString(unsigned int arg1) const {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        eastl::string local_88;
        eastl::string local_68;
        eastl::string local_48;

        char* pcVar3 = (char*)this;
        eastl::string local_108;
        int iVar1 = m_loopBehaviour;
        if (iVar1 == 2) {
            pcVar3 = "Never";
            eastl::string::assign(&local_108, "Never");
        } else if (iVar1 == 1) {
            pcVar3 = "Always";
            eastl::string::assign(&local_108, "Always");
        } else if (iVar1 == 0) {
            pcVar3 = "Default";
            eastl::string::assign(&local_108, "Default");
        }
        if ((array<StringView, 21ul>*)(long)m_basAnimType == (array<StringView, 21ul>*)21) {
            pcVar3 = "None";
        } else {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                (array<StringView, 21ul>*)(long)m_basAnimType))[(unsigned long)pcVar3];
            pcVar3 = (char*)this_00->end();
        }
        eastl::string local_128(pcVar3);
        auto local_e8 = debug_helpers::GetTabbedSpaces(arg1);
        auto local_c8 = debug_helpers::GetTabbedSpaces(arg1 + 1);
        auto result;
        local_48 + local_e8;
        result = &local_48;
        local_48 + local_e8;
        result += &local_48;
        local_68 + local_c8;
        if (empty() == '\0') {
            eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        }
        local_88 + local_68;
        local_48 + local_88;
        result += &local_48;
        local_68 + local_c8;
        local_88 + local_68;
        local_48 + local_88;
        result += &local_48;
        local_68 + local_c8;
        auto local_a8 = eastl::to_string(m_seqID);
        local_88 + local_68;
        local_48 + local_88;
        result += &local_48;
        local_68 + local_c8;
        local_88 + local_68;
        local_48 + local_88;
        result += &local_48;
        local_68 + local_c8;
        local_a8 = eastl::to_string(m_loopLength);
        local_88 + local_68;
        local_48 + local_88;
        result += &local_48;
        local_68 + local_c8;
        local_a8 = eastl::to_string((unsigned int)m_tweenLastFrameToFirst);
        local_88 + local_68;
        local_48 + local_88;
        result += &local_48;
        local_68 + local_c8;
        (&field_96)->operator_cast_to_bool();
        local_88 + local_68;
        local_48 + local_88;
        result += &local_48;
        local_48 + local_e8;
        result += &local_48;
        return result;
    }

    // 0x100966040
    void AnimationDescriptor::InitialiseCallbackFunctions(VariableList&)::$_1::operator()() const {
        VariableList* this_00 = field_0;
        long lVar1 = field_8;
        this_00->SetUintVariable((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(),
                                 *(unsigned int*)(lVar1 + 232));
    }

} // namespace jag::graphics
