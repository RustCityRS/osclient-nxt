// libs/game/runetek5/config/vartype/VarValue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game {
    class VarValue {
    public:
        class Dummy;
        VarValue();
        VarValue* operator=(VarValue&&);
        ~VarValue();
        bool IsUndefined() const;
        int GetInt() const;
        void Set<int&>(int&);
        void Set<eastl::basic_string<char, BucketAllocatorEASTL>>(eastl::basic_string<char, BucketAllocatorEASTL>&&);
        ulong operator<(VarValue const&) const;
        void Set<int>(int&&);
        void Set<long long>(long long&&);
        longlong GetInt64() const;
        void GetString() const;
        void Set<CoordFine>(CoordFine&&);
        void GetCoordFine() const;
        VarValue* operator=(VarValue const&);
        VarValue(int);
        VarValue(eastl::basic_string<char, BucketAllocatorEASTL>);
        VarValue(long long);
        VarValue(CoordFine);
        VarValue(VarValue const&);
        VarValue* operator=(eastl::basic_string<char, BucketAllocatorEASTL>);
        VarValue* operator=(int);
        void* hash() const;
        void operator==(VarValue const&) const;
        VarValue(VarValue&&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class VarValue::Dummy {
    public:
        operator==(Dummy) const;
    };

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    VarValue::Dummy::operator==(VarValue::Dummy) const;

    // 0x10018bf20, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VarValue::VarValue(): jumps straight to the base-object constructor

    // 0x10018bf30, 48 bytes, inline, placed by class name and debug map
    // VarValue::operator=(VarValue&&)
    /* VarValue::TEMPNAMEPLACEHOLDERVALUE(VarValue&&) */

    VarValue* VarValue::operator=(VarValue* param_1) {
        Dummy local_20[8];

        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            (variant*)param_1);
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)
                param_1,
            local_20);
        return this;
    }

    // 0x10018bf60, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // VarValue::~VarValue(): jumps straight to the base-object destructor

    // 0x100191390, 32 bytes, inline, placed by class name
    // VarValue::IsUndefined() const
    bool VarValue::IsUndefined() {
        long lVar1;

        lVar1 = index();
        return lVar1 == 4;
    }

    // 0x1001913b0, 80 bytes, inline, placed by class name
    // VarValue::GetInt() const
    int VarValue::GetInt() {
        long lVar1;
        int* piVar2;

        lVar1 = index();
        if (lVar1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_value.index() == (type_traits::variant_type_index<int, StorageType>)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarValue.h",
                      77, (char*)0);
        }
        piVar2 =
            std::get<int, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
                (variant*)this);
        return *piVar2;
    }

    // 0x100195190, 16 bytes, inline, placed by class name
    // void VarValue::Set<int&>(int&)
    void VarValue::Set<int&>(int* param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            param_1);
    }

    // 0x1001951a0, 16 bytes, inline, placed by class name
    // void VarValue::Set<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL>&&)
    void VarValue::Set<eastl::basic_string<char, BucketAllocatorEASTL>>(basic_string* param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            param_1);
    }

    // 0x1001a0d80, 32 bytes, base-object constructor, inline, placed by class name
    // VarValue::VarValue()
    void VarValue::VarValue() {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                     VarValue::Dummy>::variant<VarValue::Dummy, 0, 0, 0, VarValue::Dummy, 4ul, 0>((Dummy*)this);
    }

    // 0x1001a1fd0, 48 bytes, base-object destructor, inline, placed by class name
    // VarValue::~VarValue()
    void VarValue::~VarValue() {
        Dummy local_18[8];

        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            local_18);
        ~variant();
    }

    // 0x100255df0, 256 bytes, inline, placed by class name
    // VarValue::operator<(VarValue const&) const
    /* VarValue::TEMPNAMEPLACEHOLDERVALUE(VarValue const&) const */

    ulong VarValue::operator<(VarValue* param_1) {
        int iVar1;
        long lVar2;
        uint uVar3;
        ulong uVar4;
        ulong uVar5;
        int* piVar6;
        longlong* plVar7;
        basic_string* pbVar8;

        uVar4 = index();
        uVar5 = param_1->index();
        if (uVar4 == uVar5) {
            uVar3 = (**(code**)(*BaseVarType::INTEGER + 16))();
            if (uVar4 == uVar3) {
                piVar6 = std::get<int, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                                  VarValue::Dummy>((variant*)this);
                iVar1 = *piVar6;
                piVar6 = std::get<int, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                                  VarValue::Dummy>((variant*)param_1);
                uVar4 = (ulong)CONCAT31((int3)((uint)iVar1 >> 8), iVar1 < *piVar6);
            } else {
                uVar3 = (**(code**)(*BaseVarType::LONG + 16))();
                if (uVar4 == uVar3) {
                    plVar7 = std::get<long long, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>,
                                      CoordFine, VarValue::Dummy>((variant*)this);
                    lVar2 = *plVar7;
                    plVar7 = std::get<long long, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>,
                                      CoordFine, VarValue::Dummy>((variant*)param_1);
                    uVar4 = CONCAT71((int7)((ulong)lVar2 >> 8), lVar2 < *plVar7);
                } else {
                    uVar3 = (**(code**)(*BaseVarType::STRING + 16))();
                    if (uVar4 != uVar3) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/vartype/VarValue.h",
                                        295, "Unhandled VarValue type");
                    }
                    pbVar8 = std::get<eastl::basic_string<char, BucketAllocatorEASTL>, int, long long,
                                      eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
                        (variant*)this);
                    std::get<eastl::basic_string<char, BucketAllocatorEASTL>, int, long long,
                             eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
                        (variant*)param_1);
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar8);
                    uVar4 = (ulong)(uVar3 >> 31);
                }
            }
        } else {
            uVar4 = 0;
        }
        return uVar4 & 4294967295;
    }

    // 0x1004cd860, 16 bytes, inline, placed by class name
    // void VarValue::Set<int>(int&&)
    void VarValue::Set<int>(int* param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            param_1);
    }

    // 0x1004cd930, 16 bytes, inline, placed by class name
    // void VarValue::Set<long long>(long long&&)
    void VarValue::Set<long long>(longlong* param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            param_1);
    }

    // 0x1004cd9c0, 80 bytes, inline, placed by class name
    // VarValue::GetInt64() const
    longlong VarValue::GetInt64() {
        long lVar1;
        longlong* plVar2;

        lVar1 = index();
        if (lVar1 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_value.index() == (type_traits::variant_type_index<int64, StorageType>)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarValue.h",
                      83, (char*)0);
        }
        plVar2 = std::get<long long, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                          VarValue::Dummy>((variant*)this);
        return *plVar2;
    }

    // 0x1004cdbb0, 80 bytes, inline, placed by class name
    // VarValue::GetString() const
    void VarValue::GetString() {
        long lVar1;

        lVar1 = index();
        if (lVar1 != 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_value.index() == (type_traits::variant_type_index<eastl::bucket_string, StorageType>)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarValue.h",
                      89, (char*)0);
        }
        std::get<eastl::basic_string<char, BucketAllocatorEASTL>, int, long long,
                 eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>((variant*)this);
    }

    // 0x1004cdc70, 16 bytes, inline, placed by class name
    // void VarValue::Set<CoordFine>(CoordFine&&)
    void VarValue::Set<CoordFine>(CoordFine* param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            param_1);
    }

    // 0x1004cdcf0, 80 bytes, inline, placed by class name
    // VarValue::GetCoordFine() const
    void VarValue::GetCoordFine() {
        long lVar1;

        lVar1 = index();
        if (lVar1 != 3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_value.index() == (type_traits::variant_type_index<game::CoordFine, StorageType>)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarValue.h",
                      95, (char*)0);
        }
        std::get<CoordFine, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                 VarValue::Dummy>((variant*)this);
    }

    // 0x1004ce0c0, 32 bytes, inline, placed by class name
    // VarValue::operator=(VarValue const&)
    /* VarValue::TEMPNAMEPLACEHOLDERVALUE(VarValue const&) */

    VarValue* VarValue::operator=(VarValue* param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            (variant*)param_1);
        return this;
    }

    // 0x1004ce6c0, 16 bytes, complete-object constructor, inline, placed by class name
    // VarValue::VarValue(int): jumps straight to the base-object constructor

    // 0x1004d1000, 16 bytes, complete-object constructor, inline, placed by class name
    // VarValue::VarValue(eastl::basic_string<char, BucketAllocatorEASTL>): jumps straight to the base-object constructor

    // 0x1004d1010, 16 bytes, complete-object constructor, inline, placed by class name
    // VarValue::VarValue(long long): jumps straight to the base-object constructor

    // 0x1004d1020, 16 bytes, complete-object constructor, inline, placed by class name
    // VarValue::VarValue(CoordFine): jumps straight to the base-object constructor

    // 0x1004d1650, 16 bytes, complete-object constructor, inline, placed by class name
    // VarValue::VarValue(VarValue const&): jumps straight to the base-object constructor

    // 0x1004d2d10, 32 bytes, base-object constructor, inline, placed by class name
    // VarValue::VarValue(int)
    void VarValue::VarValue(int param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                     VarValue::Dummy>::variant<int&, 0, 0, 0, int, 0ul, 0>((int*)this);
    }

    // 0x1004d38c0, 16 bytes, base-object constructor, inline, placed by class name
    // VarValue::VarValue(eastl::basic_string<char, BucketAllocatorEASTL>)
    void VarValue::VarValue() {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                     VarValue::Dummy>::variant<eastl::basic_string<char, BucketAllocatorEASTL>, 0, 0, 0,
                                               eastl::basic_string<char, BucketAllocatorEASTL>, 2ul, 0>(
            (basic_string*)this);
    }

    // 0x1004d3a00, 32 bytes, base-object constructor, inline, placed by class name
    // VarValue::VarValue(long long)
    void VarValue::VarValue(longlong param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                     VarValue::Dummy>::variant<long long&, 0, 0, 0, long long, 1ul, 0>((longlong*)this);
    }

    // 0x1004d3b50, 32 bytes, base-object constructor, inline, placed by class name
    // VarValue::VarValue(CoordFine)
    void VarValue::VarValue(CoordFine param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                     VarValue::Dummy>::variant<CoordFine, 0, 0, 0, CoordFine, 3ul, 0>((CoordFine*)this);
    }

    // 0x1004d3d10, 16 bytes, base-object constructor, inline, placed by class name
    // VarValue::VarValue(VarValue const&)
    void VarValue::VarValue(VarValue* param_1) {
        new (this)
            std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
                param_1);
    }

    // 0x100544150, 32 bytes, inline, placed by class name
    // VarValue::operator=(eastl::basic_string<char, BucketAllocatorEASTL>)
    /* VarValue::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   BucketAllocatorEASTL>) */

    VarValue* VarValue::operator=(basic_string* param_2) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            param_2);
        return this;
    }

    // 0x100544170, 32 bytes, inline, placed by class name
    // VarValue::operator=(int)
    /* VarValue::TEMPNAMEPLACEHOLDERVALUE(int) */

    VarValue* VarValue::operator=(int param_1) {
        int local_14;

        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>::
        operator=(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            &local_14);
        return this;
    }

    // 0x10054a880, 256 bytes, inline, placed by class name
    // VarValue::hash() const
    void* VarValue::hash() {
        uint uVar1;
        ulong uVar2;
        int* piVar3;
        void* pvVar4;
        longlong* plVar5;
        basic_string* pbVar6;
        CoordFine* pCVar7;
        hash<short> local_38[8];
        use_first<eastl::pair<int const, unsigned int>> local_30[8];
        hash<eastl::basic_string<char, BucketAllocatorEASTL>> local_28[8];
        hash<CoordFine> local_20[8];

        uVar2 = index();
        uVar1 = (**(code**)(*BaseVarType::INTEGER + 16))();
        if (uVar2 == uVar1) {
            piVar3 = std::get<int, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                              VarValue::Dummy>((variant*)this);
            pvVar4 = (void*)eastl::hash<short>::operator()(local_38, (short)*piVar3);
        } else {
            uVar1 = (**(code**)(*BaseVarType::LONG + 16))();
            if (uVar2 == uVar1) {
                plVar5 = std::get<long long, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                                  VarValue::Dummy>((variant*)this);
                pvVar4 = eastl::use_first<eastl::pair<int const, unsigned int>>::operator()(local_30, *plVar5);
            } else {
                uVar1 = (**(code**)(*BaseVarType::STRING + 16))();
                if (uVar2 == uVar1) {
                    pbVar6 = std::get<eastl::basic_string<char, BucketAllocatorEASTL>, int, long long,
                                      eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
                        (variant*)this);
                    pvVar4 = (void*)eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>::operator()(local_28,
                                                                                                             pbVar6);
                } else {
                    uVar1 = (**(code**)(*BaseVarType::COORDFINE + 16))();
                    if (uVar2 != uVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/vartype/VarValue.h",
                                        121, (char*)0);
                    }
                    pCVar7 = std::get<CoordFine, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>,
                                      CoordFine, VarValue::Dummy>((variant*)this);
                    pvVar4 = (void*)eastl::hash<CoordFine>::operator()(local_20, pCVar7);
                }
            }
        }
        return pvVar4;
    }

    // 0x10054abb0, 16 bytes, inline, placed by class name
    // VarValue::operator==(VarValue const&) const
    /* VarValue::TEMPNAMEPLACEHOLDERVALUE(VarValue const&) const */

    void VarValue::operator==(VarValue* param_1) {
        std::operator==((variant*)this, (variant*)param_1);
    }

    // 0x1009037a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VarValue::VarValue(VarValue&&): jumps straight to the base-object constructor

    // 0x1009037b0, 16 bytes, base-object constructor, inline, placed by class name
    // VarValue::VarValue(VarValue&&)
    void VarValue::VarValue(VarValue* param_1) {
        new (this)
            std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
                param_1);
    }

} // namespace jag::game
