// libs/jtl/WrapArray.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 24 instantiations, e.g. <char const* const>, <char const>, <double>
    class WrapArray {
    public:
        long end() const;
        WrapArray<std::array<char const*, 4ul>>(std::array<char const*, 4ul> const& chars);
        long operator[](unsigned long arg1) const;
        WrapArray<eastl::vector<http::CRMData::ImageElement>>(
            const eastl::vector<http::CRMData::ImageElement>& imageElements);
        WrapArray<eastl::vector<http::CRMData::LabelElement>>(
            const eastl::vector<http::CRMData::LabelElement>& labelElements);
        long operator[](unsigned long arg1);
        WrapArray<WrapArray<unsigned char const>>(WrapArray<unsigned char const>& wrapArray);
        WrapArray(const unsigned char* particle, unsigned long arg2);
        WrapArray<Array<double>>(Array<double>& joints);
        WrapArray<Array<double>>(Array<double>& jointPoses);
        void Wrap<eastl::fixed_string<char, 128>>(const eastl::fixed_string<char, 128>& str);
        WrapArray<eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul>>(
            const eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul>& keys);
        WrapArray(WrapArray<unsigned char const>&& wrapArray);
        WrapArray<std::array<char const*, 3ul>>(std::array<char const*, 3ul> const& chars);
        WrapArray<std::array<char const*, 5ul>>(std::array<char const*, 5ul> const& chars);
        WrapArray<std::array<char const*, 7ul>>(std::array<char const*, 7ul> const& chars);
        WrapArray<std::array<char const*, 2ul>>(std::array<char const*, 2ul> const& chars);
        long end();
        char* at(unsigned long arg1) const;
        WrapArray<eastl::fixed_vector<console::ArgDecodingError, 4ul>>(
            eastl::fixed_vector<console::ArgDecodingError, 4ul>& argDecodingErrors);
        WrapArray(WrapArray<char const>&& wrapArray);
        WrapArray<std::array<double, 262144ul>>(std::array<double, 262144ul>& arg1);
        WrapArray<eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>>(
            eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos);
        WrapArray(WrapArray<math::Matrix43T<float>>&& wrapArray);
        WrapArray(WrapArray<float>&& wrapArray);
        WrapArray<math::Matrix43T<float>>* operator=(WrapArray<math::Matrix43T<float>>&& wrapArray);
        WrapArray<float>* operator=(WrapArray<float>&& wrapArray);
        WrapArray(const WrapArray<unsigned char const>& wrapArray);
        WrapArray<unsigned char const>* operator=(WrapArray<unsigned char const>&& wrapArray);
        WrapArray<char const>* operator=(WrapArray<char const>&& wrapArray);
        void Wrap<eastl::fixed_string<char, 512>>(const eastl::fixed_string<char, 512>& str);
        WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul>>(
            eastl::fixed_vector<math::Matrix44T<float>, 64ul>& matrix44s);
        WrapArray<eastl::fixed_vector<graphics::JointPose, 256ul>>(
            eastl::fixed_vector<graphics::JointPose, 256ul>& jointPoses);
        WrapArray(WrapArray<graphics::JointPose>&& wrapArray);
        WrapArray<graphics::JointPose>* operator=(WrapArray<graphics::JointPose>&& wrapArray);
        WrapArray<graphics::AnimCurveSegmentCacheData>*
        operator=(WrapArray<graphics::AnimCurveSegmentCacheData>&& wrapArray);
        WrapArray(WrapArray<graphics::AnimCurveSegmentCacheData>&& wrapArray);
        void Wrap<std::basic_string_view<char>>(const std::basic_string_view<char>& str);
        uint64_t front();
        long back();
    };

    // 0x1000642c0
    long WrapArray<char const* const>::end() const {
        long lVar1 = *(long*)(this + 8);
        long lVar2 = HeapBeginPtr();
        return lVar1 + lVar2 * 8;
    }

    // 0x1000765c0
    WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul>>(std::array<char const*, 4ul> const& chars) {
        *(uint64_t*)this = 4;
        uint64_t uVar1 = chars.data();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x100204120
    long WrapArray<http::CRMData::ImageElement const>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 24 + *(long*)(this + 8);
    }

    // 0x100204240
    long WrapArray<http::CRMData::LabelElement const>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 56 + *(long*)(this + 8);
    }

    // 0x100216270
    WrapArray<http::CRMData::ImageElement const>::WrapArray<eastl::vector<http::CRMData::ImageElement>>(
        const eastl::vector<http::CRMData::ImageElement>& imageElements) {
        uint64_t uVar1 = imageElements.size();
        *(uint64_t*)this = uVar1;
        uVar1 = imageElements.HeapBeginPtr();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x1002162b0
    WrapArray<http::CRMData::LabelElement const>::WrapArray<eastl::vector<http::CRMData::LabelElement>>(
        const eastl::vector<http::CRMData::LabelElement>& labelElements) {
        uint64_t uVar1 = labelElements.size();
        *(uint64_t*)this = uVar1;
        uVar1 = labelElements.HeapBeginPtr();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x1002945c0
    long WrapArray<float>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 4 + *(long*)(this + 8);
    }

    // 0x1002d9ee0
    WrapArray<unsigned char const>::WrapArray<WrapArray<unsigned char const>>(
        WrapArray<unsigned char const>& wrapArray) {
        uint64_t uVar1 = wrapArray.HeapBeginPtr();
        *(uint64_t*)this = uVar1;
        uVar1 = wrapArray.end();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x1002d9f50
    WrapArray<unsigned char const>::WrapArray(const unsigned char* particle, unsigned long arg2) {
        *(unsigned long*)this = arg2;
        *(Particle**)(this + 8) = particle;
    }

    // 0x1002ef660
    long WrapArray<math::Vector4T<float>>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 16 + *(long*)(this + 8);
    }

    // 0x1002ef730
    long WrapArray<math::Matrix43T<float>>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 48 + *(long*)(this + 8);
    }

    // 0x10044ef10
    WrapArray<double>::WrapArray<Array<double>>(Array<double>& jointPoses) {
        uint64_t uVar1 = jointPoses.end();
        *(uint64_t*)this = uVar1;
        uVar1 = jointPoses.data();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x1004b6a30
    void WrapArray<char const>::Wrap<eastl::fixed_string<char, 128>>(const eastl::fixed_string<char, 128>& str) {
        Particle* particle = (Particle*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2 = str.size();
        new (this) WrapArray(particle, arg2);
    }

    // 0x10053a350
    long WrapArray<game::Cutscene2DAnimation<float>::Key const>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 8 + *(long*)(this + 8);
    }

    // 0x100541e00
    WrapArray<game::Cutscene2DAnimation<float>::Key const>::WrapArray<
        eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul>>(
        const eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul>& keys) {
        uint64_t uVar1 = keys.size();
        *(uint64_t*)this = uVar1;
        uVar1 = keys.HeapBeginPtr();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x10054ce60
    WrapArray<unsigned char const>::WrapArray(WrapArray<unsigned char const>&& wrapArray) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        operator=(this, wrapArray);
    }

    // 0x1005f9320
    long WrapArray<unsigned char>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 + *(long*)(this + 8);
    }

    // 0x1005fc1d0
    WrapArray<char const* const>::WrapArray<std::array<char const*, 3ul>>(std::array<char const*, 3ul> const& chars) {
        *(uint64_t*)this = 3;
        uint64_t uVar1 = chars.data();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x1005fcac0
    WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul>>(std::array<char const*, 5ul> const& chars) {
        *(uint64_t*)this = 5;
        uint64_t uVar1 = chars.data();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x10060dde0
    long WrapArray<char const* const>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 8 + *(long*)(this + 8);
    }

    // 0x10060f2e0
    WrapArray<char const* const>::WrapArray<std::array<char const*, 7ul>>(std::array<char const*, 7ul> const& chars) {
        *(uint64_t*)this = 7;
        uint64_t uVar1 = chars.data();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x10060f870
    WrapArray<char const* const>::WrapArray<std::array<char const*, 2ul>>(std::array<char const*, 2ul> const& chars) {
        *(uint64_t*)this = 2;
        uint64_t uVar1 = chars.data();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x10068ac20
    long WrapArray<http::CRMData::LabelElement const>::end() {
        long lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() * 56 + lVar1;
    }

    // 0x1006e76f0
    char* WrapArray<char const>::at(unsigned long arg1) const {
        if (HeapBeginPtr() <= arg1) {
            LogAssert("index < size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 69,
                      nullptr);
        }
        return (char*)operator[](this, arg1);
    }

    // 0x1006e7790
    long WrapArray<char const>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 + *(long*)(this + 8);
    }

    // 0x1006ed560
    WrapArray<console::ArgDecodingError>::WrapArray<eastl::fixed_vector<console::ArgDecodingError, 4ul>>(
        eastl::fixed_vector<console::ArgDecodingError, 4ul>& argDecodingErrors) {
        uint64_t uVar1 = argDecodingErrors.size();
        *(uint64_t*)this = uVar1;
        uVar1 = argDecodingErrors.HeapBeginPtr();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x100711de0
    WrapArray<char const>::WrapArray(WrapArray<char const>&& wrapArray) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        operator=(this, wrapArray);
    }

    // 0x1007fb540
    WrapArray<double>::WrapArray<std::array<double, 262144ul>>(std::array<double, 262144ul>& arg1) {
        *(uint64_t*)this = 262144;
        uint64_t uVar1 = arg1.data();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x10082c790
    long WrapArray<graphics::Particle const>::end() {
        long lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() * 80 + lVar1;
    }

    // 0x10082dc60
    WrapArray<math::Matrix43T<float>>::WrapArray(WrapArray<math::Matrix43T<float>>&& wrapArray) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        operator=(this, wrapArray);
    }

    // 0x10082dc80
    WrapArray<math::Matrix43T<float>>*
    WrapArray<math::Matrix43T<float>>::operator=(WrapArray<math::Matrix43T<float>>&& wrapArray) {
        std::swap<unsigned long>(*this, wrapArray);
        std::swap<math::Matrix43T<float>*>(*((this + 8)), *((wrapArray + 8)));
        return this;
    }

    // 0x10082dcf0
    WrapArray<float>::WrapArray(WrapArray<float>&& wrapArray) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        operator=(this, wrapArray);
    }

    // 0x10082dd10
    WrapArray<float>* WrapArray<float>::operator=(WrapArray<float>&& wrapArray) {
        std::swap<unsigned long>(*this, wrapArray);
        std::swap<float*>(*((this + 8)), *((wrapArray + 8)));
        return this;
    }

    // 0x10082e550
    WrapArray<unsigned char const>::WrapArray(const WrapArray<unsigned char const>& wrapArray) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        uint64_t uVar1 = *(uint64_t*)(wrapArray + 8);
        *(uint64_t*)this = *(uint64_t*)wrapArray;
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x1008381a0
    WrapArray<graphics::MaterialInfo const>::WrapArray<eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>>(
        eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) {
        uint64_t uVar1 = materialInfos.size();
        *(uint64_t*)this = uVar1;
        uVar1 = materialInfos.HeapBeginPtr();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x100855910
    long WrapArray<math::Vector2T<float>>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 8 + *(long*)(this + 8);
    }

    // 0x10085dd40
    long WrapArray<graphics::MaterialInfo const>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 28 + *(long*)(this + 8);
    }

    // 0x1008cfd60
    WrapArray<unsigned char const>*
    WrapArray<unsigned char const>::operator=(WrapArray<unsigned char const>&& wrapArray) {
        std::swap<unsigned long>(*this, wrapArray);
        std::swap<unsigned char const*>(*((this + 8)), *((wrapArray + 8)));
        return this;
    }

    // 0x1008e5010
    long WrapArray<char const>::end() {
        long lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() + lVar1;
    }

    // 0x1008fe8f0
    WrapArray<char const>* WrapArray<char const>::operator=(WrapArray<char const>&& wrapArray) {
        std::swap<unsigned long>(*this, wrapArray);
        std::swap<char const*>(*((this + 8)), *((wrapArray + 8)));
        return this;
    }

    // 0x100906800
    void WrapArray<char const>::Wrap<eastl::fixed_string<char, 512>>(const eastl::fixed_string<char, 512>& str) {
        auto particle = str.begin();
        unsigned long arg2 = str.size();
        new (this) WrapArray(particle, arg2);
    }

    // 0x10091ecb0
    long WrapArray<math::Vector4T<float>>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 16 + *(long*)(this + 8);
    }

    // 0x10094e900
    long WrapArray<graphics::JointPose const>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 48 + *(long*)(this + 8);
    }

    // 0x10094ec00
    long WrapArray<math::Matrix44T<float>>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 64 + *(long*)(this + 8);
    }

    // 0x10094ec80
    long WrapArray<graphics::Joint const>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 320 + *(long*)(this + 8);
    }

    // 0x1009614b0
    long WrapArray<float const>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 4 + *(long*)(this + 8);
    }

    // 0x1009655a0
    WrapArray<math::Matrix44T<float>>::WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul>>(
        eastl::fixed_vector<math::Matrix44T<float>, 64ul>& matrix44s) {
        uint64_t uVar1 = matrix44s.size();
        *(uint64_t*)this = uVar1;
        uVar1 = matrix44s.HeapBeginPtr();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x100965ee0
    WrapArray<graphics::JointPose>::WrapArray<eastl::fixed_vector<graphics::JointPose, 256ul>>(
        eastl::fixed_vector<graphics::JointPose, 256ul>& jointPoses) {
        uint64_t uVar1 = jointPoses.size();
        *(uint64_t*)this = uVar1;
        uVar1 = jointPoses.HeapBeginPtr();
        *(uint64_t*)(this + 8) = uVar1;
    }

    // 0x10096c630
    WrapArray<graphics::JointPose>::WrapArray(WrapArray<graphics::JointPose>&& wrapArray) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        operator=(this, wrapArray);
    }

    // 0x10096c650
    WrapArray<graphics::JointPose>*
    WrapArray<graphics::JointPose>::operator=(WrapArray<graphics::JointPose>&& wrapArray) {
        std::swap<unsigned long>(*this, wrapArray);
        std::swap<graphics::JointPose*>(*((this + 8)), *((wrapArray + 8)));
        return this;
    }

    // 0x100979dc0
    long WrapArray<graphics::AnimCurveSegmentCacheData>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 48 + *(long*)(this + 8);
    }

    // 0x10097afd0
    long WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData>>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 16 + *(long*)(this + 8);
    }

    // 0x100984e50
    long WrapArray<graphics::JointPose>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 48 + *(long*)(this + 8);
    }

    // 0x100988310
    long WrapArray<math::Matrix43T<float>>::end() {
        long lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() * 48 + lVar1;
    }

    // 0x100988da0
    long WrapArray<math::Matrix43T<float>>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 48 + *(long*)(this + 8);
    }

    // 0x1009925b0
    WrapArray<graphics::AnimCurveSegmentCacheData>* WrapArray<graphics::AnimCurveSegmentCacheData>::operator=(
        WrapArray<graphics::AnimCurveSegmentCacheData>&& wrapArray) {
        std::swap<unsigned long>(*this, wrapArray);
        std::swap<graphics::AnimCurveSegmentCacheData*>(*((this + 8)), *((wrapArray + 8)));
        return this;
    }

    // 0x100992710
    WrapArray<graphics::AnimCurveSegmentCacheData>::WrapArray(
        WrapArray<graphics::AnimCurveSegmentCacheData>&& wrapArray) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        operator=(this, wrapArray);
    }

    // 0x1009b8e10
    long WrapArray<shared_ptr<render::RenderTargets>>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 16 + *(long*)(this + 8);
    }

    // 0x1009b8f60
    long WrapArray<shared_ptr<render::RenderTargets>>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 16 + *(long*)(this + 8);
    }

    // 0x1009fbc00
    long WrapArray<unsigned char const>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 + *(long*)(this + 8);
    }

    // 0x100a51f60
    void WrapArray<char const>::Wrap<std::basic_string_view<char>>(const std::basic_string_view<char>& str) {
        auto particle = str.data();
        unsigned long arg2 = str.size();
        new (this) WrapArray(particle, arg2);
    }

    // 0x100b8ca60
    long WrapArray<unsigned char>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 + *(long*)(this + 8);
    }

    // 0x100b8d300
    long WrapArray<float>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 4 + *(long*)(this + 8);
    }

    // 0x100b8e4f0
    long WrapArray<short>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 2 + *(long*)(this + 8);
    }

    // 0x100b91760
    long WrapArray<short>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 2 + *(long*)(this + 8);
    }

    // 0x100c64e60
    long WrapArray<double>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 * 8 + *(long*)(this + 8);
    }

    // 0x100c7e640
    long WrapArray<console::ArgDecodingError>::end() {
        long lVar1 = *(long*)(this + 8);
        long lVar2 = HeapBeginPtr();
        return lVar1 + lVar2 * 40;
    }

    // 0x100c81e90
    uint64_t WrapArray<char const>::front() {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 192,
                      nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100c81ed0
    long WrapArray<char const>::back() {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 206,
                      nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() + lVar1 - 1;
    }

    // 0x100cb9720
    long WrapArray<char const>::operator[](unsigned long arg1) {
        if (*(long*)(this + 8) == 0) {
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      nullptr);
        }
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        return arg1 + *(long*)(this + 8);
    }

} // namespace jag
