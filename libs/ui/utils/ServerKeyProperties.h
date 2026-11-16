// libs/ui/utils/ServerKeyProperties.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.ui

namespace jag::ui {
    class ComponentParams {
    public:
        class ParamHolder;
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        void Set(int, int);
        void Set(int, eastl::basic_string<char, BucketAllocatorEASTL> const&);
        int GetInt(int, int) const;
        basic_string* GetString(int, eastl::basic_string<char, BucketAllocatorEASTL> const&) const;
        void Remove(int);
        void EnsureParamsMapExists();
        ComponentParams();
        ~ComponentParams();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class ComponentParams::ParamHolder {
    public:
        ParamHolder();
        ~ParamHolder();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    class ServerKeyProperties {
    public:
        ServerKeyProperties();
        ~ServerKeyProperties();

        // data members, from how the methods use this: 904 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[843];
        undefined1 field_844; // offset 844
        char _unknown_845[51];
        undefined8 field_896; // offset 896
    };

    // 0x100693c70, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ServerKeyProperties::ServerKeyProperties(): jumps straight to the base-object constructor

    // 0x100693ce0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ServerKeyProperties::~ServerKeyProperties(): jumps straight to the base-object destructor

    // 0x100693cf0, 208 bytes, placed by debug map only (low confidence)
    // ComponentParams::Decode(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void ComponentParams::Decode(PacketT* param_1, int param_2) {
        byte bVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        basic_string local_48[24];

        if (-1 < param_2) {
            bVar1 = param_1->g1();
            if (bVar1 != 0) {
                uVar4 = (uint)bVar1;
                do {
                    iVar2 = param_1->g3();
                    iVar3 = param_1->g4s();
                    Set(this, iVar2, iVar3);
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            bVar1 = param_1->g1();
            if (bVar1 != 0) {
                uVar4 = (uint)bVar1;
                do {
                    iVar2 = param_1->g3();
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_48, true);
                    Set(this, iVar2, local_48);
                    local_48->~basic_string();
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
        }
    }

    // 0x100693dc0, 64 bytes, inline, placed by debug map only (low confidence)
    // ComponentParams::Set(int, int)
    void ComponentParams::Set(int param_1, int param_2) {
        vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                 eastl::allocator>>* this_00;
        variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>* this_01;
        int local_18;
        int local_14;

        _local_18 = CONCAT44(param_2, param_1);
        EnsureParamsMapExists(this);
        this_00 =
            (vector_map<
                int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                eastl::allocator,
                eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                              eastl::allocator>>*)std::
                unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>::operator->(
                    (unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>*)this);
        this_01 = (variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>*)eastl::vector_map<
            int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                          eastl::allocator>>::operator[](this_00, &local_18);
        std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>::operator=(this_01, &local_14);
    }

    // 0x100693e00, 80 bytes, inline, placed by debug map only (low confidence)
    // ComponentParams::Set(int, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    void ComponentParams::Set(int param_1, basic_string* param_2) {
        vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                 eastl::allocator>>* this_00;
        variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>* this_01;
        int local_1c;

        local_1c = param_1;
        EnsureParamsMapExists(this);
        this_00 =
            (vector_map<
                int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                eastl::allocator,
                eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                              eastl::allocator>>*)std::
                unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>::operator->(
                    (unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>*)this);
        this_01 = (variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>*)eastl::vector_map<
            int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                          eastl::allocator>>::operator[](this_00, &local_1c);
        std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>::operator=(this_01, param_2);
    }

    // 0x100693e50, 144 bytes, placed by debug map only (low confidence)
    // ComponentParams::GetInt(int, int) const
    int ComponentParams::GetInt(int param_1, int param_2) {
        bool bVar1;
        vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                 eastl::allocator>>* this_00;
        long lVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar3;
        int* piVar4;
        int local_24;

        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            this_00 =
                (vector_map<
                    int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                    eastl::allocator,
                    eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                  eastl::allocator>>*)
                    std::unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>::
                    operator->((unique_ptr<ComponentParams::ParamHolder,
                                           std::default_delete<ComponentParams::ParamHolder>>*)this);
            lVar2 = eastl::vector_map<
                int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                eastl::allocator,
                eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                              eastl::allocator>>::find(this_00, &local_24);
            this_01 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>::
                    operator->((unique_ptr<ComponentParams::ParamHolder,
                                           std::default_delete<ComponentParams::ParamHolder>>*)this);
            lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            if (((lVar2 != lVar3) &&
                 (piVar4 = (int*)std::get_if<int, int, eastl::basic_string<char, BucketAllocatorEASTL>>(
                      (variant*)(lVar2 + 8)),
                  piVar4 != (int*)0)) &&
                (piVar4 != (int*)0)) {
                return *piVar4;
            }
        }
        return param_2;
    }

    // 0x100693f20, 128 bytes, placed by debug map only (low confidence)
    // ComponentParams::GetString(int, eastl::basic_string<char, BucketAllocatorEASTL> const&) const
    basic_string* ComponentParams::GetString(int param_1, basic_string* param_2) {
        bool bVar1;
        vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                 eastl::allocator>>* this_00;
        long lVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar3;
        basic_string* pbVar4;
        int local_24;

        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            this_00 =
                (vector_map<
                    int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                    eastl::allocator,
                    eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                  eastl::allocator>>*)
                    std::unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>::
                    operator->((unique_ptr<ComponentParams::ParamHolder,
                                           std::default_delete<ComponentParams::ParamHolder>>*)this);
            lVar2 = eastl::vector_map<
                int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                eastl::allocator,
                eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                              eastl::allocator>>::find(this_00, &local_24);
            this_01 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>::
                    operator->((unique_ptr<ComponentParams::ParamHolder,
                                           std::default_delete<ComponentParams::ParamHolder>>*)this);
            lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            if ((lVar2 != lVar3) &&
                (pbVar4 =
                     (basic_string*)std::get_if<eastl::basic_string<char, BucketAllocatorEASTL>, int,
                                                eastl::basic_string<char, BucketAllocatorEASTL>>((variant*)(lVar2 + 8)),
                 pbVar4 != (basic_string*)0)) {
                return pbVar4;
            }
        }
        return param_2;
    }

    // 0x100693fb0, 48 bytes, placed by debug map only (low confidence)
    // ComponentParams::Remove(int)
    void ComponentParams::Remove(int param_1) {
        vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                 eastl::allocator>>* this;
        bool bVar1;
        undefined4 in_register_0000003c;
        int local_14;

        bVar1 = (CONCAT44(in_register_0000003c, param_1))->operator_cast_to_bool();
        if (bVar1) {
            this =
                (vector_map<
                    int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                    eastl::allocator,
                    eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                  eastl::allocator>>*)
                    std::unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>::
                    operator->(
                        (unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>*)
                            CONCAT44(in_register_0000003c, param_1));
            eastl::vector_map<
                int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                eastl::allocator,
                eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                              eastl::allocator>>::erase(this, &local_14);
        }
    }

    // 0x100694020, 128 bytes, placed by debug map only (low confidence)
    // ComponentParams::EnsureParamsMapExists()
    void ComponentParams::EnsureParamsMapExists() {
        bool bVar1;
        ParamHolder* this_00;
        vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>, eastl::allocator>*
            this_01;

        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            this_00 = operator_new(40);
            *(undefined8*)this_00 = 0;
            *(undefined8*)&this_00->field_8 = 0;
            *(undefined8*)&this_00->field_16 = 0;
            *(undefined8*)&this_00->field_24 = 0;
            *(undefined8*)&this_00->field_32 = 0;
            ParamHolder::ParamHolder(this_00);
            reset(this_00);
            this_01 =
                (vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                        eastl::allocator>*)std::unique_ptr<ComponentParams::ParamHolder,
                                                           std::default_delete<ComponentParams::ParamHolder>>::
                operator->(
                    (unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>*)this);
            eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                          eastl::allocator>::reserve(this_01, 4);
        }
    }

    // 0x1006940d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ComponentParams::ParamHolder::ParamHolder(): jumps straight to the base-object constructor

    // 0x1006b07b0, 192 bytes, base-object constructor, inline, placed by class name
    // ServerKeyProperties::ServerKeyProperties()
    void ServerKeyProperties::ServerKeyProperties() {
        uint local_1c;

        field_0 = 0;
        new (&field_8) std::array<eastl::vector<int, eastl::allocator>, 11ul>();
        new (&field_360) std::array<eastl::vector<unsigned int, eastl::allocator>, 11ul>();
        field_844 = 0;
        field_896 = 0;
        local_1c = 4294967295;
        (&field_848, (int*)&local_1c)->fill();
        local_1c = 0;
        (&field_712, (int*)&local_1c)->fill();
        local_1c = 0;
        (&field_756, &local_1c)->fill();
        local_1c = 0;
        (&field_800, (int*)&local_1c)->fill();
    }

    // 0x1006b0ab0, 48 bytes, base-object destructor, inline, placed by class name
    // ServerKeyProperties::~ServerKeyProperties()
    void ServerKeyProperties::~ServerKeyProperties() {
        (&field_360)->~array();
        (&field_8)->~array();
    }

} // namespace jag::ui
