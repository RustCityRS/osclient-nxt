// libs/jtl/WrapArray.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 24 instantiations, e.g. <char const* const>, <char const>, <double>
    class WrapArray {
    public:
        long end() const;
        WrapArray<std::array<char const*, 4ul>>(std::array<char const*, 4ul> const&);
        long operator[](unsigned long) const;
        WrapArray<eastl::vector<http::CRMData::ImageElement, eastl::allocator>>(
            eastl::vector<http::CRMData::ImageElement, eastl::allocator> const&);
        WrapArray<eastl::vector<http::CRMData::LabelElement, eastl::allocator>>(
            eastl::vector<http::CRMData::LabelElement, eastl::allocator> const&);
        long operator[](unsigned long);
        WrapArray<WrapArray<unsigned char const>>(WrapArray<unsigned char const>&);
        WrapArray(unsigned char const*, unsigned long);
        WrapArray<Array<double, eastl::allocator>>(Array<double, eastl::allocator>&);
        void Wrap<eastl::fixed_string<char, 128, true, eastl::allocator>>(
            eastl::fixed_string<char, 128, true, eastl::allocator> const&);
        WrapArray<eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator>>(
            eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator> const&);
        WrapArray(WrapArray<unsigned char const>&&);
        WrapArray<std::array<char const*, 3ul>>(std::array<char const*, 3ul> const&);
        WrapArray<std::array<char const*, 5ul>>(std::array<char const*, 5ul> const&);
        WrapArray<std::array<char const*, 7ul>>(std::array<char const*, 7ul> const&);
        WrapArray<std::array<char const*, 2ul>>(std::array<char const*, 2ul> const&);
        long end();
        void at(unsigned long) const;
        WrapArray<eastl::fixed_vector<console::ArgDecodingError, 4ul, true, eastl::allocator>>(
            eastl::fixed_vector<console::ArgDecodingError, 4ul, true, eastl::allocator>&);
        WrapArray(WrapArray<char const>&&);
        WrapArray<std::array<double, 262144ul>>(std::array<double, 262144ul>&);
        WrapArray<eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>>(
            eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>&);
        WrapArray(WrapArray<math::Matrix43T<float>>&&);
        WrapArray(WrapArray<float>&&);
        WrapArray<math::Matrix43T<float>>* operator=(WrapArray<math::Matrix43T<float>>&&);
        WrapArray<float>* operator=(WrapArray<float>&&);
        WrapArray(WrapArray<unsigned char const> const&);
        WrapArray<unsigned char const>* operator=(WrapArray<unsigned char const>&&);
        WrapArray<char const>* operator=(WrapArray<char const>&&);
        void Wrap<eastl::fixed_string<char, 512, true, eastl::allocator>>(
            eastl::fixed_string<char, 512, true, eastl::allocator> const&);
        WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>>(
            eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>&);
        WrapArray<eastl::fixed_vector<graphics::JointPose, 256ul, true, eastl::allocator>>(
            eastl::fixed_vector<graphics::JointPose, 256ul, true, eastl::allocator>&);
        WrapArray(WrapArray<graphics::JointPose>&&);
        WrapArray<graphics::JointPose>* operator=(WrapArray<graphics::JointPose>&&);
        WrapArray<graphics::AnimCurveSegmentCacheData>* operator=(WrapArray<graphics::AnimCurveSegmentCacheData>&&);
        WrapArray(WrapArray<graphics::AnimCurveSegmentCacheData>&&);
        void Wrap<std::basic_string_view<char, std::char_traits<char>>>(
            std::basic_string_view<char, std::char_traits<char>> const&);
        front();
        long back();
    };

    // 0x1000642c0, 32 bytes, inline, placed by class name and debug map
    // WrapArray<char const* const>::end() const
    /* WrapArray<ImDrawList*>::end() */

    long WrapArray<ImDrawList*>::end() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 8);
        lVar2 = HeapBeginPtr();
        return lVar1 + lVar2 * 8;
    }

    // 0x1000765b0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul> >(std::array<char const*, 4ul> const&): jumps straight to the base-object constructor

    // 0x1000765c0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul> >(std::array<char const*, 4ul> const&)
    /* WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul> >(std::array<char
   const*, 4ul> const&) */

    void WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul>>(array* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 4;
        uVar1 = param_1->data();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x100204120, 128 bytes, inline, placed by class name
    // WrapArray<http::CRMData::ImageElement const>::operator[](unsigned long) const
    long WrapArray<http::CRMData::ImageElement_const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 24 + *(long*)(this + 8);
    }

    // 0x100204240, 128 bytes, inline, placed by class name
    // WrapArray<http::CRMData::LabelElement const>::operator[](unsigned long) const
    long WrapArray<http::CRMData::LabelElement_const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 56 + *(long*)(this + 8);
    }

    // 0x100216260, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<http::CRMData::ImageElement const>::WrapArray<eastl::vector<http::CRMData::ImageElement, eastl::allocator> >(eastl::vector<http::CRMData::ImageElement, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x100216270, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<http::CRMData::ImageElement const>::WrapArray<eastl::vector<http::CRMData::ImageElement, eastl::allocator> >(eastl::vector<http::CRMData::ImageElement, eastl::allocator> const&)
    void WrapArray<http::CRMData::ImageElement_const>::WrapArray<
        eastl::vector<http::CRMData::ImageElement, eastl::allocator>>(vector* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->size();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->HeapBeginPtr();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x1002162a0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<http::CRMData::LabelElement const>::WrapArray<eastl::vector<http::CRMData::LabelElement, eastl::allocator> >(eastl::vector<http::CRMData::LabelElement, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1002162b0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<http::CRMData::LabelElement const>::WrapArray<eastl::vector<http::CRMData::LabelElement, eastl::allocator> >(eastl::vector<http::CRMData::LabelElement, eastl::allocator> const&)
    void WrapArray<http::CRMData::LabelElement_const>::WrapArray<
        eastl::vector<http::CRMData::LabelElement, eastl::allocator>>(vector* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->size();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->HeapBeginPtr();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x1002945c0, 128 bytes, inline, placed by class name
    // WrapArray<float>::operator[](unsigned long)
    long WrapArray<float>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 4 + *(long*)(this + 8);
    }

    // 0x1002d9ed0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<unsigned char const>::WrapArray<WrapArray<unsigned char const> >(WrapArray<unsigned char const>&): jumps straight to the base-object constructor

    // 0x1002d9ee0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<unsigned char const>::WrapArray<WrapArray<unsigned char const> >(WrapArray<unsigned char const>&)
    /* WrapArray<game::Cutscene2DAnimation<float>::Key
   const>::WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>
   >(WrapArray<game::Cutscene2DAnimation<float>::Key const>&) */

    void WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
        WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(WrapArray* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->HeapBeginPtr();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->end();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x1002d9f40, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<unsigned char const>::WrapArray(unsigned char const*, unsigned long): jumps straight to the base-object constructor

    // 0x1002d9f50, 16 bytes, base-object constructor, inline, placed by class name
    // WrapArray<unsigned char const>::WrapArray(unsigned char const*, unsigned long)
    /* WrapArray<unsigned char>::WrapArray(unsigned char*, unsigned long) */

    void WrapArray<unsigned char>::WrapArray(uchar* param_1, ulong param_2) {
        *(ulong*)this = param_2;
        *(uchar**)(this + 8) = param_1;
    }

    // 0x1002ef660, 128 bytes, inline, placed by class name
    // WrapArray<math::Vector4T<float> >::operator[](unsigned long)
    long WrapArray<math::Vector4T<float>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 16 + *(long*)(this + 8);
    }

    // 0x1002ef730, 128 bytes, inline, placed by class name
    // WrapArray<math::Matrix43T<float> >::operator[](unsigned long)
    long WrapArray<math::Matrix43T<float>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 48 + *(long*)(this + 8);
    }

    // 0x10043b2d0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<double>::WrapArray<Array<double, eastl::allocator> >(Array<double, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x10044ef10, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<double>::WrapArray<Array<double, eastl::allocator> >(Array<double, eastl::allocator>&)
    /* WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>
   >(Array<unsigned char, eastl::allocator>&) */

    void WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(Array* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->end();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->data();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x1004b6a30, 64 bytes, inline, placed by class name
    // void WrapArray<char const>::Wrap<eastl::fixed_string<char, 128, true, eastl::allocator> >(eastl::fixed_string<char, 128, true, eastl::allocator> const&)
    /* void WrapArray<char const>::Wrap<eastl::fixed_string<char, 40, true, eastl::allocator>
   >(eastl::fixed_string<char, 40, true, eastl::allocator> const&) */

    void WrapArray<char const>::Wrap<eastl::fixed_string<char, 40, true, eastl::allocator>>(fixed_string* param_1) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        new (param_1) WrapArray<unsigned char>(puVar1, uVar2);
    }

    // 0x10053a350, 128 bytes, inline, placed by class name
    // WrapArray<game::Cutscene2DAnimation<float>::Key const>::operator[](unsigned long)
    long WrapArray<game::Cutscene2DAnimation<float>::Key_const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 8 + *(long*)(this + 8);
    }

    // 0x100541df0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<game::Cutscene2DAnimation<float>::Key const>::WrapArray<eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator> >(eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x100541e00, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<game::Cutscene2DAnimation<float>::Key const>::WrapArray<eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator> >(eastl::fixed_vector<game::Cutscene2DAnimation<float>::Key, 1ul, true, eastl::allocator> const&)
    /* WrapArray<ui::ComponentMultiValueMixin::ValueChangeEvent
   const>::WrapArray<eastl::fixed_vector<ui::ComponentMultiValueMixin::ValueChangeEvent, 2ul,
   false, eastl::dummy_allocator>
   >(eastl::fixed_vector<ui::ComponentMultiValueMixin::ValueChangeEvent, 2ul, false,
   eastl::dummy_allocator> const&) */

    void WrapArray<ui::ComponentMultiValueMixin::ValueChangeEvent_const>::WrapArray<
        eastl::fixed_vector<ui::ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
        fixed_vector* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->size();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->HeapBeginPtr();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x10054ce50, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<unsigned char const>::WrapArray(WrapArray<unsigned char const>&&): jumps straight to the base-object constructor

    // 0x10054ce60, 32 bytes, base-object constructor, inline, placed by class name
    // WrapArray<unsigned char const>::WrapArray(WrapArray<unsigned char const>&&)
    void WrapArray<unsigned char const>::WrapArray(WrapArray* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        operator=(this, param_1);
    }

    // 0x1005f9320, 112 bytes, inline, placed by class name
    // WrapArray<unsigned char>::operator[](unsigned long)
    long WrapArray<unsigned char>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 + *(long*)(this + 8);
    }

    // 0x1005fc1c0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 3ul> >(std::array<char const*, 3ul> const&): jumps straight to the base-object constructor

    // 0x1005fc1d0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 3ul> >(std::array<char const*, 3ul> const&)
    /* WrapArray<char const* const>::WrapArray<std::array<char const*, 3ul> >(std::array<char
   const*, 3ul> const&) */

    void WrapArray<char const* const>::WrapArray<std::array<char const*, 3ul>>(array* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 3;
        uVar1 = param_1->data();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x1005fcab0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul> >(std::array<char const*, 5ul> const&): jumps straight to the base-object constructor

    // 0x1005fcac0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul> >(std::array<char const*, 5ul> const&)
    /* WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul> >(std::array<char
   const*, 5ul> const&) */

    void WrapArray<char const* const>::WrapArray<std::array<char const*, 5ul>>(array* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 5;
        uVar1 = param_1->data();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x10060dde0, 128 bytes, inline, placed by class name
    // WrapArray<char const* const>::operator[](unsigned long)
    long WrapArray<char const* const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 8 + *(long*)(this + 8);
    }

    // 0x10060f2d0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 7ul> >(std::array<char const*, 7ul> const&): jumps straight to the base-object constructor

    // 0x10060f2e0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 7ul> >(std::array<char const*, 7ul> const&)
    /* WrapArray<char const* const>::WrapArray<std::array<char const*, 7ul> >(std::array<char
   const*, 7ul> const&) */

    void WrapArray<char const* const>::WrapArray<std::array<char const*, 7ul>>(array* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 7;
        uVar1 = param_1->data();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x10060f860, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 2ul> >(std::array<char const*, 2ul> const&): jumps straight to the base-object constructor

    // 0x10060f870, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<char const* const>::WrapArray<std::array<char const*, 2ul> >(std::array<char const*, 2ul> const&)
    /* WrapArray<char const* const>::WrapArray<std::array<char const*, 2ul> >(std::array<char
   const*, 2ul> const&) */

    void WrapArray<char const* const>::WrapArray<std::array<char const*, 2ul>>(array* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 2;
        uVar1 = param_1->data();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x10068ac20, 32 bytes, inline, placed by class name
    // WrapArray<http::CRMData::LabelElement const>::end()
    long WrapArray<http::CRMData::LabelElement_const>::end() {
        long lVar1;

        lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() * 56 + lVar1;
    }

    // 0x1006e76f0, 80 bytes, inline, placed by class name
    // WrapArray<char const>::at(unsigned long) const
    void WrapArray<char const>::at(ulong param_1) {
        if (HeapBeginPtr() <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 69,
                      (char*)0);
        }
        operator[](this, param_1);
    }

    // 0x1006e7790, 112 bytes, inline, placed by class name
    // WrapArray<char const>::operator[](unsigned long) const
    long WrapArray<char const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 + *(long*)(this + 8);
    }

    // 0x1006ec7e0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<console::ArgDecodingError>::WrapArray<eastl::fixed_vector<console::ArgDecodingError, 4ul, true, eastl::allocator> >(eastl::fixed_vector<console::ArgDecodingError, 4ul, true, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x1006ed560, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<console::ArgDecodingError>::WrapArray<eastl::fixed_vector<console::ArgDecodingError, 4ul, true, eastl::allocator> >(eastl::fixed_vector<console::ArgDecodingError, 4ul, true, eastl::allocator>&)
    void WrapArray<console::ArgDecodingError>::WrapArray<
        eastl::fixed_vector<console::ArgDecodingError, 4ul, true, eastl::allocator>>(fixed_vector* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->size();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->HeapBeginPtr();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x100711de0, 32 bytes, base-object constructor, inline, placed by class name
    // WrapArray<char const>::WrapArray(WrapArray<char const>&&)
    void WrapArray<char const>::WrapArray(WrapArray* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        operator=(this, param_1);
    }

    // 0x1007db540, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<double>::WrapArray<std::array<double, 262144ul> >(std::array<double, 262144ul>&): jumps straight to the base-object constructor

    // 0x1007fb540, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<double>::WrapArray<std::array<double, 262144ul> >(std::array<double, 262144ul>&)
    /* WrapArray<double>::WrapArray<std::array<double, 262144ul> >(std::array<double, 262144ul>&)
    */

    void WrapArray<double>::WrapArray<std::array<double, 262144ul>>(array* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 262144;
        uVar1 = param_1->data();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x10080fbd0, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<graphics::MaterialInfo const>::WrapArray<eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL> >(eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>&): jumps straight to the base-object constructor

    // 0x10082c790, 48 bytes, inline, placed by class name
    // WrapArray<graphics::Particle const>::end()
    long WrapArray<graphics::Particle_const>::end() {
        long lVar1;

        lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() * 80 + lVar1;
    }

    // 0x10082dc40, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<math::Matrix43T<float> >::WrapArray(WrapArray<math::Matrix43T<float> >&&): jumps straight to the base-object constructor

    // 0x10082dc50, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<float>::WrapArray(WrapArray<float>&&): jumps straight to the base-object constructor

    // 0x10082dc60, 32 bytes, base-object constructor, inline, placed by class name
    // WrapArray<math::Matrix43T<float> >::WrapArray(WrapArray<math::Matrix43T<float> >&&)
    void WrapArray<math::Matrix43T<float>>::WrapArray(WrapArray* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        operator=(this, param_1);
    }

    // 0x10082dc80, 48 bytes, inline, placed by class name
    // WrapArray<math::Matrix43T<float> >::operator=(WrapArray<math::Matrix43T<float> >&&)
    /* WrapArray<math::Matrix43T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(WrapArray<math::Matrix43T<float> >&&) */

    WrapArray<math::Matrix43T<float>>* WrapArray<math::Matrix43T<float>>::operator=(WrapArray* param_1) {
        std::swap<unsigned long>((ulong*)this, (ulong*)param_1);
        std::swap<math::Matrix43T<float>*>((Matrix43T**)(this + 8), (Matrix43T**)(param_1 + 8));
        return this;
    }

    // 0x10082dcf0, 32 bytes, base-object constructor, inline, placed by class name
    // WrapArray<float>::WrapArray(WrapArray<float>&&)
    void WrapArray<float>::WrapArray(WrapArray* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        operator=(this, param_1);
    }

    // 0x10082dd10, 48 bytes, inline, placed by class name
    // WrapArray<float>::operator=(WrapArray<float>&&)
    /* WrapArray<float>::TEMPNAMEPLACEHOLDERVALUE(WrapArray<float>&&) */

    WrapArray<float>* WrapArray<float>::operator=(WrapArray* param_1) {
        std::swap<unsigned long>((ulong*)this, (ulong*)param_1);
        std::swap<float*>((float**)(this + 8), (float**)(param_1 + 8));
        return this;
    }

    // 0x10082e540, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<unsigned char const>::WrapArray(WrapArray<unsigned char const> const&): jumps straight to the base-object constructor

    // 0x10082e550, 32 bytes, base-object constructor, inline, placed by class name
    // WrapArray<unsigned char const>::WrapArray(WrapArray<unsigned char const> const&)
    /* WrapArray<math::Matrix44T<float>
   const>::WrapArray(WrapArray<math::Matrix44T<float> const> const&) */

    void WrapArray<math::Matrix44T<float> const>::WrapArray(WrapArray* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x1008381a0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<graphics::MaterialInfo const>::WrapArray<eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL> >(eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>&)
    /* WrapArray<graphics::MaterialInfo
   const>::WrapArray<eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>
   >(eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL> const&) */

    void
    WrapArray<graphics::MaterialInfo_const>::WrapArray<eastl::vector<graphics::MaterialInfo, SafeBucketAllocatorEASTL>>(
        vector* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->size();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->HeapBeginPtr();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x100855910, 128 bytes, inline, placed by class name
    // WrapArray<math::Vector2T<float> >::operator[](unsigned long)
    long WrapArray<math::Vector2T<float>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 8 + *(long*)(this + 8);
    }

    // 0x10085dd40, 128 bytes, inline, placed by class name
    // WrapArray<graphics::MaterialInfo const>::operator[](unsigned long) const
    long WrapArray<graphics::MaterialInfo_const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 28 + *(long*)(this + 8);
    }

    // 0x1008cfd60, 48 bytes, inline, placed by class name
    // WrapArray<unsigned char const>::operator=(WrapArray<unsigned char const>&&)
    /* WrapArray<unsigned char const>::TEMPNAMEPLACEHOLDERVALUE(WrapArray<unsigned char
   const>&&) */

    WrapArray<unsigned char const>* WrapArray<unsigned char const>::operator=(WrapArray* param_1) {
        std::swap<unsigned long>((ulong*)this, (ulong*)param_1);
        std::swap<unsigned char const*>((uchar**)(this + 8), (uchar**)(param_1 + 8));
        return this;
    }

    // 0x1008e5010, 32 bytes, inline, placed by class name
    // WrapArray<char const>::end()
    /* WrapArrayValueCopy<unsigned char, eastl::allocator>::end() const */

    long WrapArrayValueCopy<unsigned char, eastl::allocator>::end(
        WrapArrayValueCopy<unsigned char, eastl::allocator>* this) {
        long lVar1;

        lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() + lVar1;
    }

    // 0x1008fe8f0, 48 bytes, inline, placed by class name
    // WrapArray<char const>::operator=(WrapArray<char const>&&)
    /* WrapArray<char const>::TEMPNAMEPLACEHOLDERVALUE(WrapArray<char const>&&) */

    WrapArray<char const>* WrapArray<char const>::operator=(WrapArray* param_1) {
        std::swap<unsigned long>((ulong*)this, (ulong*)param_1);
        std::swap<char const*>((char**)(this + 8), (char**)(param_1 + 8));
        return this;
    }

    // 0x100906800, 64 bytes, inline, placed by class name
    // void WrapArray<char const>::Wrap<eastl::fixed_string<char, 512, true, eastl::allocator> >(eastl::fixed_string<char, 512, true, eastl::allocator> const&)
    void WrapArray<char const>::Wrap<eastl::fixed_string<char, 512, true, eastl::allocator>>(fixed_string* param_1) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        new (param_1) WrapArray<unsigned char>(puVar1, uVar2);
    }

    // 0x10091ecb0, 128 bytes, inline, placed by class name
    // WrapArray<math::Vector4T<float> >::operator[](unsigned long) const
    long WrapArray<math::Vector4T<float>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 16 + *(long*)(this + 8);
    }

    // 0x10094de30, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<math::Matrix44T<float> >::WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator> >(eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x10094e900, 128 bytes, inline, placed by class name
    // WrapArray<graphics::JointPose const>::operator[](unsigned long) const
    long WrapArray<graphics::JointPose_const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 48 + *(long*)(this + 8);
    }

    // 0x10094ec00, 128 bytes, inline, placed by class name
    // WrapArray<math::Matrix44T<float> >::operator[](unsigned long)
    long WrapArray<math::Matrix44T<float>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 64 + *(long*)(this + 8);
    }

    // 0x10094ec80, 128 bytes, inline, placed by class name
    // WrapArray<graphics::Joint const>::operator[](unsigned long) const
    long WrapArray<graphics::Joint_const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 320 + *(long*)(this + 8);
    }

    // 0x100953f70, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<graphics::JointPose>::WrapArray<eastl::fixed_vector<graphics::JointPose, 256ul, true, eastl::allocator> >(eastl::fixed_vector<graphics::JointPose, 256ul, true, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x1009614b0, 128 bytes, inline, placed by class name
    // WrapArray<float const>::operator[](unsigned long) const
    long WrapArray<float const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 4 + *(long*)(this + 8);
    }

    // 0x1009655a0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<math::Matrix44T<float> >::WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator> >(eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>&)
    void WrapArray<math::Matrix44T<float>>::WrapArray<
        eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>>(fixed_vector* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->size();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->HeapBeginPtr();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x100965ee0, 48 bytes, base-object constructor, inline, placed by class name
    // WrapArray<graphics::JointPose>::WrapArray<eastl::fixed_vector<graphics::JointPose, 256ul, true, eastl::allocator> >(eastl::fixed_vector<graphics::JointPose, 256ul, true, eastl::allocator>&)
    /* WrapArray<graphics::JointPose>::WrapArray<eastl::fixed_vector<graphics::JointPose,
   64ul, true, eastl::allocator> >(eastl::fixed_vector<graphics::JointPose, 64ul, true,
   eastl::allocator>&) */

    void
    WrapArray<graphics::JointPose>::WrapArray<eastl::fixed_vector<graphics::JointPose, 64ul, true, eastl::allocator>>(
        fixed_vector* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->size();
        *(undefined8*)this = uVar1;
        uVar1 = param_1->HeapBeginPtr();
        *(undefined8*)(this + 8) = uVar1;
    }

    // 0x10096c620, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<graphics::JointPose>::WrapArray(WrapArray<graphics::JointPose>&&): jumps straight to the base-object constructor

    // 0x10096c630, 32 bytes, base-object constructor, inline, placed by class name
    // WrapArray<graphics::JointPose>::WrapArray(WrapArray<graphics::JointPose>&&)
    void WrapArray<graphics::JointPose>::WrapArray(WrapArray* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        operator=(this, param_1);
    }

    // 0x10096c650, 48 bytes, inline, placed by class name
    // WrapArray<graphics::JointPose>::operator=(WrapArray<graphics::JointPose>&&)
    /* WrapArray<graphics::JointPose>::TEMPNAMEPLACEHOLDERVALUE(WrapArray<graphics::JointPose>&&)
    */

    WrapArray<graphics::JointPose>* WrapArray<graphics::JointPose>::operator=(WrapArray* param_1) {
        std::swap<unsigned long>((ulong*)this, (ulong*)param_1);
        std::swap<graphics::JointPose*>((JointPose**)(this + 8), (JointPose**)(param_1 + 8));
        return this;
    }

    // 0x100979dc0, 128 bytes, inline, placed by class name
    // WrapArray<graphics::AnimCurveSegmentCacheData>::operator[](unsigned long)
    long WrapArray<graphics::AnimCurveSegmentCacheData>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 48 + *(long*)(this + 8);
    }

    // 0x10097afd0, 128 bytes, inline, placed by class name
    // WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData> >::operator[](unsigned long)
    long WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 16 + *(long*)(this + 8);
    }

    // 0x100984e50, 128 bytes, inline, placed by class name
    // WrapArray<graphics::JointPose>::operator[](unsigned long)
    long WrapArray<graphics::JointPose>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 48 + *(long*)(this + 8);
    }

    // 0x100988310, 48 bytes, inline, placed by class name
    // WrapArray<math::Matrix43T<float> >::end()
    long WrapArray<math::Matrix43T<float>>::end() {
        long lVar1;

        lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() * 48 + lVar1;
    }

    // 0x100988da0, 128 bytes, inline, placed by class name
    // WrapArray<math::Matrix43T<float> >::operator[](unsigned long) const
    long WrapArray<math::Matrix43T<float>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 48 + *(long*)(this + 8);
    }

    // 0x1009925b0, 48 bytes, inline, placed by class name
    // WrapArray<graphics::AnimCurveSegmentCacheData>::operator=(WrapArray<graphics::AnimCurveSegmentCacheData>&&)
    /* WrapArray<graphics::AnimCurveSegmentCacheData>::TEMPNAMEPLACEHOLDERVALUE(WrapArray<graphics::AnimCurveSegmentCacheData>&&)
    */

    WrapArray<graphics::AnimCurveSegmentCacheData>*
    WrapArray<graphics::AnimCurveSegmentCacheData>::operator=(WrapArray* param_1) {
        std::swap<unsigned long>((ulong*)this, (ulong*)param_1);
        std::swap<graphics::AnimCurveSegmentCacheData*>((AnimCurveSegmentCacheData**)(this + 8),
                                                        (AnimCurveSegmentCacheData**)(param_1 + 8));
        return this;
    }

    // 0x100992700, 16 bytes, complete-object constructor, inline, placed by class name
    // WrapArray<graphics::AnimCurveSegmentCacheData>::WrapArray(WrapArray<graphics::AnimCurveSegmentCacheData>&&): jumps straight to the base-object constructor

    // 0x100992710, 32 bytes, base-object constructor, inline, placed by class name
    // WrapArray<graphics::AnimCurveSegmentCacheData>::WrapArray(WrapArray<graphics::AnimCurveSegmentCacheData>&&)
    void WrapArray<graphics::AnimCurveSegmentCacheData>::WrapArray(WrapArray* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        operator=(this, param_1);
    }

    // 0x1009b8e10, 128 bytes, inline, placed by class name
    // WrapArray<shared_ptr<render::RenderTargets> >::operator[](unsigned long) const
    long WrapArray<shared_ptr<render::RenderTargets>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 16 + *(long*)(this + 8);
    }

    // 0x1009b8f60, 128 bytes, inline, placed by class name
    // WrapArray<shared_ptr<render::RenderTargets> >::operator[](unsigned long)
    long WrapArray<shared_ptr<render::RenderTargets>>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 16 + *(long*)(this + 8);
    }

    // 0x1009fbc00, 112 bytes, inline, placed by class name
    // WrapArray<unsigned char const>::operator[](unsigned long)
    long WrapArray<unsigned char const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 + *(long*)(this + 8);
    }

    // 0x100a51f60, 64 bytes, inline, placed by class name
    // void WrapArray<char const>::Wrap<std::basic_string_view<char, std::char_traits<char> > >(std::basic_string_view<char, std::char_traits<char> > const&)
    /* void WrapArray<char const>::Wrap<std::basic_string_view<char, std::char_traits<char> >
   >(std::basic_string_view<char, std::char_traits<char> > const&) */

    void WrapArray<char const>::Wrap<std::basic_string_view<char, std::char_traits<char>>>(basic_string_view* param_1) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)param_1->data();
        uVar2 = param_1->size();
        new (this) WrapArray<unsigned char>(puVar1, uVar2);
    }

    // 0x100b8ca60, 112 bytes, inline, placed by class name
    // WrapArray<unsigned char>::operator[](unsigned long) const
    long WrapArray<unsigned char>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 + *(long*)(this + 8);
    }

    // 0x100b8d300, 128 bytes, inline, placed by class name
    // WrapArray<float>::operator[](unsigned long) const
    long WrapArray<float>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 4 + *(long*)(this + 8);
    }

    // 0x100b8e4f0, 128 bytes, inline, placed by class name
    // WrapArray<short>::operator[](unsigned long)
    long WrapArray<short>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 2 + *(long*)(this + 8);
    }

    // 0x100b91760, 128 bytes, inline, placed by class name
    // WrapArray<short>::operator[](unsigned long) const
    long WrapArray<short>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 183,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 184,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 2 + *(long*)(this + 8);
    }

    // 0x100c64e60, 128 bytes, inline, placed by class name
    // WrapArray<double>::operator[](unsigned long)
    long WrapArray<double>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 * 8 + *(long*)(this + 8);
    }

    // 0x100c7e640, 32 bytes, inline, placed by class name
    // WrapArray<console::ArgDecodingError>::end()
    long WrapArray<console::ArgDecodingError>::end() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 8);
        lVar2 = HeapBeginPtr();
        return lVar1 + lVar2 * 40;
    }

    // 0x100c81e90, 64 bytes, inline, placed by class name
    // WrapArray<char const>::front()
    undefined8 WrapArray<char const>::front() {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 192,
                      (char*)0);
        }
        return *(undefined8*)(this + 8);
    }

    // 0x100c81ed0, 80 bytes, inline, placed by class name
    // WrapArray<char const>::back()
    long WrapArray<char const>::back() {
        long lVar1;

        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 206,
                      (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        return HeapBeginPtr() + lVar1 + -1;
    }

    // 0x100cb9720, 112 bytes, inline, placed by class name
    // WrapArray<char const>::operator[](unsigned long)
    long WrapArray<char const>::operator[](ulong param_1) {
        if (*(long*)(this + 8) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 174,
                      (char*)0);
        }
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/WrapArray.h", 175,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        return param_1 + *(long*)(this + 8);
    }

} // namespace jag
