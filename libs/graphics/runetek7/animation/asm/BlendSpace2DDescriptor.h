// libs/graphics/runetek7/animation/asm/BlendSpace2DDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class BlendSpace2DDescriptor {
    public:
        class LocationInfo;
        // virtual methods in vtable order
        virtual ~BlendSpace2DDescriptor();
        virtual uint64_t GetNodeType() const;
        virtual BlendSpace2DDescriptor* Create(AnimationStateResourceList& animationStateResourceList,
                                               VariableList& variableList);
        virtual BlendSpace2DDescriptor* ToString(unsigned int arg1) const;
        virtual auto Clone() const;
        BlendSpace2DDescriptor(PacketT<Array<unsigned char>>& arg1);
        BlendSpace2DDescriptor(eastl::vector<LocationInfo>&& locationInfos, eastl::vector<int>&& arg2,
                               const eastl::string& str1, const eastl::string& str2);
        BlendSpace2DDescriptor(eastl::vector<LocationInfo>&& locationInfos, const eastl::string& str1,
                               const eastl::string& str2);

    private:
        uint8_t _unknown_8[104];
    };

    class BlendSpace2DDescriptor::LocationInfo {
    public:
        float GetPositionY() const;
        float GetPositionX() const;
        long* GetBlendTree() const;
        LocationInfo(PacketT<Array<unsigned char>>& arg1);
        ~LocationInfo();
        LocationInfo(const LocationInfo& locationInfo);
        LocationInfo(LocationInfo&& locationInfo);
        LocationInfo<BlendTreeNodeDescriptor, void>(std::unique_ptr<BlendTreeNodeDescriptor>&& blendTreeNodeDescriptor,
                                                    float arg2, float arg3);

    private:
        uint8_t _unknown_0[8];
        float m_positionX;
        float m_positionY;
        uint8_t _unknown_16[4];
    };

    // 0x100961160
    auto BlendSpace2DDescriptor::Clone() const {
        auto result;
        unique_ptr<BlendSpace2DDescriptor> local_38;

        BlendSpace2DDescriptor* this_01 = (BlendSpace2DDescriptor*)operator new(136);
        vector<BlendSpace2DDescriptor::LocationInfo> local_78;
        vector<int> local_58;
        BlendSpace2DDescriptor(this_01, &local_78, &local_58, (eastl::string*)&field_8, (eastl::string*)&field_40);
        local_38.unique_ptr<true, void>(this_01);
        long lVar1 = local_38.operator->();
        uint8_t* this_00 = &field_72;
        unsigned long arg1 = this_00->size();
        ((lVar1 + 72))->reserve(arg1);
        auto locationInfo = this_00->HeapBeginPtr();
        auto pLVar2 = this_00->end();
        if (locationInfo != pLVar2) {
            do {
                lVar1 = local_38.operator->();
                ((lVar1 + 72))->emplace_back<BlendSpace2DDescriptor::LocationInfo const&>(*locationInfo);
                locationInfo = (LocationInfo*)&locationInfo->field_16;
            } while (locationInfo != pLVar2);
        }
        lVar1 = local_38.operator->();
        (*((lVar1 + 104))) = field_104;
        std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<BlendSpace2DDescriptor,
                                                             std::default_delete<BlendSpace2DDescriptor>, void, void>(
            &result, &local_38);
        return result;
    }

    // 0x1009618d0
    AnimationResource::~AnimationResource() {
        field_240.~function();
    }

    // 0x100961be0
    AnimationResource::AnimationResource(const AnimationResource& animationResource)
        : AnimationDescriptor(animationResource), field_240(animationResource.field_240),
          field_288(animationResource.field_288) {}

    // 0x1009622f0
    AnimationInfo::AnimationInfo(const AnimationParameters& animationParameters)
        : field_10(0), field_18(0), field_20(0), field_24(0), field_25(0), field_0(0) {
        *(uint64_t*)&field_8 = 0;
        new (&field_32) shared_ptr();
        field_0 = animationParameters.GetStartTimeNS();
        uint32_t uVar3 = animationParameters.GetPickingPrepassType();
        *(uint32_t*)((long)&field_10 + 6) = uVar3;
        uVar3 = animationParameters.GetLoopBehaviour();
        field_20 = uVar3;
        field_25 = animationParameters.IsMembersServer();
        auto animation = animationParameters.GetCursorMutex();
        field_32 = *animation;
    }

    // 0x100964330
    BlendSpace2DDescriptor::~BlendSpace2DDescriptor() {
        field_104.~vector();
        field_72.~vector();
        field_40.~basic_string();
        field_8.~basic_string();
    }

    // 0x100964420
    BlendSpace2DDescriptor::BlendSpace2DDescriptor(eastl::vector<BlendSpace2DDescriptor::LocationInfo>&& locationInfos,
                                                   eastl::vector<int>&& arg2, const eastl::string& str1,
                                                   const eastl::string& str2)
        : BlendTreeNodeDescriptor(), field_8(str1), field_40(str2), field_72(locationInfos), field_104(arg2) {}

    // 0x1009646b0
    BlendSpace2DDescriptor::LocationInfo::LocationInfo(const BlendSpace2DDescriptor::LocationInfo& locationInfo) {
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> _> local_28;

        unique_ptr<true, void>();
        auto plVar1 = GetBlendTree(locationInfo);
        (**(void (**)(...))(*plVar1 + 40))(&local_28, plVar1);
        *this = local_28;
        m_positionX = locationInfo.m_positionX;
        m_positionY = locationInfo.m_positionY;
    }

    // 0x1009648d0
    BlendSpace2DDescriptor::LocationInfo::LocationInfo(BlendSpace2DDescriptor::LocationInfo&& locationInfo)
        : std::unique_ptr<BlendTreeNodeDescriptor>(locationInfo) {
        float fVar1 = locationInfo.m_positionY;
        m_positionX = locationInfo.m_positionX;
        m_positionY = fVar1;
    }

    // 0x100974190
    BlendSpace2DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor, void>(
        std::unique_ptr<BlendTreeNodeDescriptor>&& blendTreeNodeDescriptor, float arg2, float arg3)
        : std::unique_ptr<BlendTreeNodeDescriptor>(blendTreeNodeDescriptor), m_positionX(arg2), m_positionY(arg3) {}

    // 0x1009741e0
    BlendSpace2DDescriptor::BlendSpace2DDescriptor(eastl::vector<BlendSpace2DDescriptor::LocationInfo>&& locationInfos,
                                                   const eastl::string& str1, const eastl::string& str2)
        : BlendTreeNodeDescriptor(), field_8(str1), field_40(str2), field_72(locationInfos) {
        if (field_72.size() != 4) {
            LogAssert("m_blendSpacePositions.size() == 4",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace2DDescriptor.h",
                      113, nullptr);
        }
        uint64_t local_48 = 4294967299;
        uint64_t local_58 = 8589934592;
        uint64_t uStack_50 = 3;
        field_104 = local_58 = 6;
    }

} // namespace jag::graphics

// 0x100964af0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x1009655e0
void asin(float arg1) {
    _asinf();
}

// 0x1009655f0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x100965600
void atan2(float arg1, float arg2) {
    _atan2f();
}

// 0x100965610
void acos(float arg1) {
    _acosf();
}

// 0x100965620
void sin(float arg1) {
    _sinf();
}
