// libs/graphics/runetek7/animation/asm/BlendSpace1DDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BlendSpace1DDescriptor {
    public:
        class LocationInfo;
        // virtual methods in vtable order
        virtual ~BlendSpace1DDescriptor();
        virtual uint64_t GetNodeType() const;
        virtual BlendSpace1DDescriptor* Create(AnimationStateResourceList& animationStateResourceList,
                                               VariableList& variableList);
        virtual auto ToString(unsigned int arg1) const;
        virtual auto Clone() const;
        BlendSpace1DDescriptor(PacketT<Array<unsigned char>>& arg1);
        BlendSpace1DDescriptor(eastl::vector<LocationInfo>&& locationInfos, const eastl::string& str, float arg3,
                               float arg4);

    private:
        float field_8;
        float field_12;
        uint8_t _unknown_16[40];
    };

    class BlendSpace1DDescriptor::LocationInfo {
    public:
        float GetPosition() const;
        LocationInfo(PacketT<Array<unsigned char>>& arg1);
        long* GetBlendTree() const;
        LocationInfo(const LocationInfo& locationInfo);
        LocationInfo(LocationInfo&& locationInfo);
        ~LocationInfo();
        LocationInfo<BlendTreeNodeDescriptor, void>(std::unique_ptr<BlendTreeNodeDescriptor>&& blendTreeNodeDescriptor,
                                                    float arg2);

    private:
        uint8_t _unknown_0[8];
        float m_position;
        uint8_t _unknown_12[4];
    };

    // 0x10095b700
    long* BlendSpace1DDescriptor::LocationInfo::GetBlendTree() const {
        return (long*)**this;
    }

    // 0x100960df0
    auto BlendSpace1DDescriptor::Clone() const {
        auto result;
        unique_ptr<BlendSpace1DDescriptor> local_30;

        BlendSpace1DDescriptor* this_00 = (BlendSpace1DDescriptor*)operator new(80);
        vector<BlendSpace1DDescriptor::LocationInfo> local_50;
        BlendSpace1DDescriptor(this_00, &local_50, (eastl::string*)&field_16, field_8, field_12);
        local_30.unique_ptr<true, void>(this_00);
        long lVar1 = local_30.operator->();
        uint8_t* this_01 = &field_48;
        unsigned long arg1 = this_01->size();
        ((lVar1 + 48))->reserve(arg1);
        auto locationInfo = this_01->HeapBeginPtr();
        auto pLVar2 = this_01->end();
        if (locationInfo != pLVar2) {
            do {
                lVar1 = local_30.operator->();
                ((lVar1 + 48))->emplace_back<BlendSpace1DDescriptor::LocationInfo const&>(*locationInfo);
                locationInfo = locationInfo + 1;
            } while (locationInfo != pLVar2);
        }
        std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<BlendSpace1DDescriptor,
                                                             std::default_delete<BlendSpace1DDescriptor>, void, void>(
            &result, &local_30);
        return result;
    }

    // 0x100963b60
    BlendSpace1DDescriptor::~BlendSpace1DDescriptor() {
        field_48.~vector();
        field_16.~basic_string();
    }

    // 0x100963c40
    BlendSpace1DDescriptor::BlendSpace1DDescriptor(eastl::vector<BlendSpace1DDescriptor::LocationInfo>&& locationInfos,
                                                   const eastl::string& str, float arg3, float arg4)
        : BlendTreeNodeDescriptor(), field_8(arg3), field_12(arg4), field_16(str), field_48(locationInfos) {}

    // 0x100963ea0
    BlendSpace1DDescriptor::LocationInfo::LocationInfo(const BlendSpace1DDescriptor::LocationInfo& locationInfo) {
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> _> local_28;

        unique_ptr<true, void>();
        auto plVar1 = locationInfo.GetBlendTree();
        (**(void (**)(...))(*plVar1 + 40))(&local_28, plVar1);
        *this = local_28;
        m_position = (float)locationInfo.GetBrightpassThreshold();
    }

    // 0x1009640c0
    BlendSpace1DDescriptor::LocationInfo::LocationInfo(BlendSpace1DDescriptor::LocationInfo&& locationInfo)
        : std::unique_ptr<BlendTreeNodeDescriptor>(locationInfo), m_position(locationInfo.m_position) {}

    // 0x1009641e0
    BlendSpace1DDescriptor::LocationInfo::~LocationInfo() {}

    // 0x100974050
    BlendSpace1DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor, void>(
        std::unique_ptr<BlendTreeNodeDescriptor>&& blendTreeNodeDescriptor, float arg2) {
        unique_ptr<true, void>();
        m_position = arg2;
        *this = blendTreeNodeDescriptor;
    }

} // namespace jag::graphics
