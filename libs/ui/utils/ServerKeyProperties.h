// libs/ui/utils/ServerKeyProperties.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.ui

namespace jag::ui {
    class ComponentParams {
    public:
        class ParamHolder;
        void Decode(PacketT<Array<unsigned char>>& arg1, int arg2);
        void Set(int arg1, int arg2);
        void Set(int arg1, const eastl::string& str);
        int GetInt(int arg1, int arg2) const;
        eastl::string* GetString(int arg1, const eastl::string& str) const;
        void Remove(int arg1);
        void EnsureParamsMapExists();
        ComponentParams();
        ~ComponentParams();

        uint8_t _unknown_0[1];
    };

    class ComponentParams::ParamHolder {
    public:
        ParamHolder();
        ~ParamHolder();

        uint8_t _unknown_0[40];
    };

    class ServerKeyProperties {
    public:
        ServerKeyProperties();
        ~ServerKeyProperties();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[843];
        uint8_t field_844;
        uint8_t _unknown_845[51];
        uint64_t field_896;
    };

    // 0x100693cf0
    void ComponentParams::Decode(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint8_t bVar1;
        int iVar2;
        int arg2_00;
        unsigned int uVar3;
        basic_string<char, BucketAllocatorEASTL> local_48;

        if (-1 < arg2) {
            bVar1 = arg1.g1();
            if (bVar1 != 0) {
                uVar3 = (unsigned int)bVar1;
                do {
                    iVar2 = arg1.g3();
                    arg2_00 = arg1.g4s();
                    Set(iVar2, arg2_00);
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            bVar1 = arg1.g1();
            if (bVar1 != 0) {
                uVar3 = (unsigned int)bVar1;
                do {
                    iVar2 = arg1.g3();
                    local_48 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_48, true);
                    Set(iVar2, &local_48);
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
        }
    }

    // 0x100693dc0
    void ComponentParams::Set(int arg1, int arg2) {
        int local_18;
        int local_14;

        _local_18 = (((uint64_t)arg2 << 32) | (uint32_t)arg1);
        EnsureParamsMapExists();
        vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>* this_00 =
            (vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>*)(*this).operator->();
        variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>* this_01 =
            (variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>*)(*this_00)[local_18];
        *this_01 = local_14;
    }

    // 0x100693e00
    void ComponentParams::Set(int arg1, const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        EnsureParamsMapExists();
        vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>* this_00 =
            (vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>*)(*this).operator->();
        variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>* this_01 =
            (variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>*)(*this_00)[arg1];
        *this_01 = str;
    }

    // 0x100693e50
    int ComponentParams::GetInt(int arg1, int arg2) const {
        int* piVar2;
        long lVar3;
        long lVar4;

        if (operator_cast_to_bool() != '\0') {
            piVar2 = (int*)(*this).operator->();
            lVar3 = eastl::vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>::find(
                *piVar2);
            lVar4 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this).operator->())->end();
            if (((lVar3 != lVar4) &&
                 (piVar2 = (int*)std::get_if<int, int, eastl::basic_string<char, BucketAllocatorEASTL>>((lVar3 + 8)),
                  piVar2 != nullptr)) &&
                (piVar2 != nullptr)) {
                return *piVar2;
            }
        }
        return arg2;
    }

    // 0x100693f20
    basic_string<char, BucketAllocatorEASTL>*
    ComponentParams::GetString(int arg1, const eastl::basic_string<char, BucketAllocatorEASTL>& str) const {
        int* arg1_00;
        long lVar2;
        long lVar3;
        basic_string<char, BucketAllocatorEASTL>* pbVar4;

        if (operator_cast_to_bool() != '\0') {
            arg1_00 = (int*)(*this).operator->();
            lVar2 = eastl::vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>::find(
                *arg1_00);
            lVar3 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this).operator->())->end();
            if ((lVar2 != lVar3) && (pbVar4 = (basic_string<char, BucketAllocatorEASTL>*)
                                         std::get_if<eastl::basic_string<char, BucketAllocatorEASTL>, int,
                                                     eastl::basic_string<char, BucketAllocatorEASTL>>((lVar2 + 8)),
                                     pbVar4 != nullptr)) {
                return pbVar4;
            }
        }
        return str;
    }

    // 0x100693fb0
    void ComponentParams::Remove(int arg1) {
        int* arg1_00;
        uint32_t in_register_0000003c;

        if (((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1))->operator_cast_to_bool() != '\0') {
            arg1_00 = (int*)(*((unique_ptr<ComponentParams::ParamHolder>*)(((uint64_t)in_register_0000003c << 32) |
                                                                           (uint32_t)arg1)))
                          .operator->();
            eastl::vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>::erase(*arg1_00);
        }
    }

    // 0x100694020
    void ComponentParams::EnsureParamsMapExists() {
        ParamHolder* this_01;

        if (operator_cast_to_bool() == '\0') {
            this_01 = (ParamHolder*)operator new(40);
            *(uint64_t*)this_01 = 0;
            *(uint64_t*)&this_01->field_8 = 0;
            *(uint64_t*)&this_01->field_16 = 0;
            *(uint64_t*)&this_01->field_24 = 0;
            *(uint64_t*)&this_01->field_32 = 0;
            new (this_01) ParamHolder();
            reset(this_01);
            ((vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>>*)(*this)
                 .operator->())
                ->reserve(4);
        }
    }

    // 0x1006b07b0
    ServerKeyProperties::ServerKeyProperties() : field_0(0), field_844(0), field_896(0) {
        unsigned int local_1c = 4294967295;
        field_848.fill(local_1c);
        local_1c = 0;
        field_712.fill(local_1c);
        local_1c = 0;
        field_756.fill(local_1c);
        local_1c = 0;
        field_800.fill(local_1c);
    }

    // 0x1006b0ab0
    ServerKeyProperties::~ServerKeyProperties() {
        field_360.~array();
        field_8.~array();
    }

} // namespace jag::ui
