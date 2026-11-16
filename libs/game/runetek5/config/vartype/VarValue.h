// libs/game/runetek5/config/vartype/VarValue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game {
    class VarValue {
    public:
        class Dummy;
        VarValue();
        VarValue* operator=(VarValue&& varValue);
        ~VarValue();
        bool IsUndefined() const;
        int GetInt() const;
        void Set<int&>(int& arg1);
        void Set<eastl::string>(eastl::string&& str);
        unsigned long operator<(const VarValue& varValue) const;
        void Set<int>(int&& arg1);
        void Set<long long>(long long&& arg1);
        long long GetInt64() const;
        void GetString() const;
        void Set<CoordFine>(CoordFine&& coordFine);
        CoordFine* GetCoordFine() const;
        VarValue* operator=(const VarValue& varValue);
        VarValue(int arg1);
        VarValue(eastl::string str);
        VarValue(long long arg1);
        VarValue(CoordFine coordFine);
        VarValue(const VarValue& varValue);
        VarValue* operator=(eastl::string str);
        VarValue* operator=(int arg1);
        uint64_t hash() const;
        void operator==(const VarValue& varValue) const;
        VarValue(VarValue&& varValue);

        uint8_t _unknown_0[1];
    };

    class VarValue::Dummy {
    public:
        uint64_t operator==(Dummy arg1) const;
    };

    // 0x100029ea0: VarValue::Dummy::operator==(VarValue::Dummy) const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10018bf30
    VarValue* VarValue::operator=(VarValue&& varValue) {
        Dummy local_20;

        *this = varValue;
        varValue = local_20;
        return this;
    }

    // 0x100191390
    bool VarValue::IsUndefined() const {
        return index() == 4;
    }

    // 0x1001913b0
    int VarValue::GetInt() const {
        if (index() != 0) {
            LogAssert("m_value.index() == (type_traits::variant_type_index<int, StorageType>)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarValue.h",
                      77, nullptr);
        }
        auto piVar2 =
            std::get<int, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
                *this);
        return *piVar2;
    }

    // 0x100195190
    void VarValue::Set<int&>(int& arg1) {
        *this = arg1;
    }

    // 0x1001951a0
    void VarValue::Set<eastl::basic_string<char, BucketAllocatorEASTL>>(
        eastl::basic_string<char, BucketAllocatorEASTL>&& str) {
        *this = str;
    }

    // 0x1001a0d80
    VarValue::VarValue() {
        Dummy local_10;

        variant<VarValue::Dummy, 0, 0, 0, VarValue::Dummy, 4ul, 0>(local_10);
    }

    // 0x1001a1fd0
    VarValue::~VarValue() {
        Dummy local_18;

        *this = local_18;
    }

    // 0x100255df0
    unsigned long VarValue::operator<(const VarValue& varValue) const {
        int iVar1;
        long lVar2;
        unsigned int uVar3;
        int* piVar6;
        long long* plVar7;

        unsigned long uVar4 = index();
        unsigned long uVar5 = varValue.index();
        if (uVar4 == uVar5) {
            uVar3 = (**(void (**)(...))(*BaseVarType::INTEGER + 16))();
            if (uVar4 == uVar3) {
                piVar6 = std::get<int, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                                  VarValue::Dummy>(*this);
                iVar1 = *piVar6;
                piVar6 = std::get<int, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                                  VarValue::Dummy>(varValue);
                uVar4 = (unsigned long)(((uint32_t)((int32_t)((unsigned int)iVar1 >> 8)) << 8) |
                                        (uint8_t)(iVar1 < *piVar6));
            } else {
                uVar3 = (**(void (**)(...))(*BaseVarType::LONG + 16))();
                if (uVar4 == uVar3) {
                    plVar7 = std::get<long long, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>,
                                      CoordFine, VarValue::Dummy>(*this);
                    lVar2 = *plVar7;
                    plVar7 = std::get<long long, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>,
                                      CoordFine, VarValue::Dummy>(varValue);
                    uVar4 = (((uint64_t)((int64_t)((unsigned long)lVar2 >> 8)) << 8) | (uint8_t)(lVar2 < *plVar7));
                } else {
                    uVar3 = (**(void (**)(...))(*BaseVarType::STRING + 16))();
                    if (uVar4 != uVar3) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/vartype/VarValue.h",
                                        295, "Unhandled VarValue type");
                    }
                    uVar3 =
                        std::get<eastl::basic_string<char, BucketAllocatorEASTL>, int, long long,
                                 eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(*this)
                            ->compare(
                                std::get<eastl::basic_string<char, BucketAllocatorEASTL>, int, long long,
                                         eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
                                    varValue));
                    uVar4 = (unsigned long)(uVar3 >> 31);
                }
            }
        } else {
            uVar4 = 0;
        }
        return uVar4 & 4294967295;
    }

    // 0x1004cd860
    void VarValue::Set<int>(int&& arg1) {
        *this = arg1;
    }

    // 0x1004cd930
    void VarValue::Set<long long>(long long&& arg1) {
        *this = arg1;
    }

    // 0x1004cd9c0
    long long VarValue::GetInt64() const {
        if (index() != 1) {
            LogAssert("m_value.index() == (type_traits::variant_type_index<int64, StorageType>)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarValue.h",
                      83, nullptr);
        }
        auto plVar2 = std::get<long long, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                               VarValue::Dummy>(*this);
        return *plVar2;
    }

    // 0x1004cdbb0
    void VarValue::GetString() const {
        if (index() != 2) {
            LogAssert("m_value.index() == (type_traits::variant_type_index<eastl::bucket_string, StorageType>)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarValue.h",
                      89, nullptr);
        }
        std::get<eastl::basic_string<char, BucketAllocatorEASTL>, int, long long,
                 eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(*this);
    }

    // 0x1004cdc70
    void VarValue::Set<CoordFine>(CoordFine&& coordFine) {
        *this = coordFine;
    }

    // 0x1004cdcf0
    CoordFine* VarValue::GetCoordFine() const {
        if (index() != 3) {
            LogAssert("m_value.index() == (type_traits::variant_type_index<game::CoordFine, StorageType>)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarValue.h",
                      95, nullptr);
        }
        return std::get<CoordFine, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                        VarValue::Dummy>(*this);
    }

    // 0x1004ce0c0
    VarValue* VarValue::operator=(const VarValue& varValue) {
        *this = varValue;
        return this;
    }

    // 0x1004d2d10
    VarValue::VarValue(int arg1) {
        variant<int&, 0, 0, 0, int, 0ul, 0>(arg1);
    }

    // 0x1004d38c0
    VarValue::VarValue(eastl::basic_string<char, BucketAllocatorEASTL> str) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                     VarValue::Dummy>::variant<eastl::basic_string<char, BucketAllocatorEASTL>, 0, 0, 0,
                                               eastl::basic_string<char, BucketAllocatorEASTL>, 2ul, 0>(
            (variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>*)this,
            str);
    }

    // 0x1004d3a00
    VarValue::VarValue(long long arg1) {
        variant<long long&, 0, 0, 0, long long, 1ul, 0>(arg1);
    }

    // 0x1004d3b50
    VarValue::VarValue(CoordFine coordFine) {
        void** local_18[2];

        variant<CoordFine, 0, 0, 0, CoordFine, 3ul, 0>(*local_18);
    }

    // 0x1004d3d10
    VarValue::VarValue(const VarValue& varValue)
        : std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
              varValue) {}

    // 0x100544150
    VarValue* VarValue::operator=(eastl::basic_string<char, BucketAllocatorEASTL> str) {
        *this = *str;
        return this;
    }

    // 0x100544170
    VarValue* VarValue::operator=(int arg1) {
        int local_14;

        *this = local_14;
        return this;
    }

    // 0x10054a880
    uint64_t VarValue::hash() const {
        int* piVar3;
        uint64_t uVar4;
        long long* plVar5;
        basic_string<char, BucketAllocatorEASTL>* str;
        CoordFine* coordFine;
        hash<short> local_38;
        use_first<eastl::pair<int const, unsigned int>> local_30;
        hash<eastl::basic_string<char, BucketAllocatorEASTL>> local_28;
        hash<CoordFine> local_20;

        unsigned long uVar2 = index();
        unsigned int uVar1 = (**(void (**)(...))(*BaseVarType::INTEGER + 16))();
        if (uVar2 == uVar1) {
            piVar3 = std::get<int, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                              VarValue::Dummy>(*this);
            uVar4 = eastl::hash<short>::operator()(&local_38, *piVar3);
        } else {
            uVar1 = (**(void (**)(...))(*BaseVarType::LONG + 16))();
            if (uVar2 == uVar1) {
                plVar5 = std::get<long long, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                                  VarValue::Dummy>(*this);
                uVar4 = eastl::use_first<eastl::pair<int const, unsigned int>>::operator()(
                    &local_30, (pair<oldscape::OpGroup const, oldscape::highlight::HighlightedGroup>*)*plVar5);
            } else {
                uVar1 = (**(void (**)(...))(*BaseVarType::STRING + 16))();
                if (uVar2 == uVar1) {
                    str = std::get<eastl::basic_string<char, BucketAllocatorEASTL>, int, long long,
                                   eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(*this);
                    uVar4 = eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>::operator()(
                        &local_28, (eastl::string*)str);
                } else {
                    uVar1 = (**(void (**)(...))(*BaseVarType::COORDFINE + 16))();
                    if (uVar2 != uVar1) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/vartype/VarValue.h",
                                        121, nullptr);
                    }
                    coordFine = std::get<CoordFine, int, long long, eastl::basic_string<char, BucketAllocatorEASTL>,
                                         CoordFine, VarValue::Dummy>(*this);
                    uVar4 = eastl::hash<CoordFine>::operator()(&local_20, coordFine);
                }
            }
        }
        return uVar4;
    }

    // 0x10054abb0
    void VarValue::operator==(const VarValue& varValue) const {
        this == varValue;
    }

    // 0x1009037b0
    VarValue::VarValue(VarValue&& varValue)
        : std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, VarValue::Dummy>(
              varValue) {}

} // namespace jag::game
