// libs/game/runetek5/config/iftype/InterfaceList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class InterfaceList {
    public:
        InterfaceList(Js5ResourceProvider&, ConfigProvider&, graphics::RT7Core&,
                      std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>);
        GetInterface(int, bool);
        void GetComponent(unsigned int, int);
        GetStaticComponent(unsigned int);
        GetDynamicComponent(unsigned int, unsigned int);
        void CloseInterface(int);
        void Clear();

        // data members, from how the methods use this: 88 bytes
        undefined8 field_0;      // offset 0
        ConfigProvider* field_8; // offset 8
        RT7Core* field_16;       // offset 16
        char _unknown_24[64];
    };

    // 0x100535a80, 80 bytes, base-object constructor, placed by class name and debug map
    // InterfaceList::InterfaceList(Js5ResourceProvider&, ConfigProvider&, graphics::RT7Core&, std::function<shared_ptr<ui::Component> (unsigned char, unsigned short)>)
    /* InterfaceList::InterfaceList(Js5ResourceProvider&, ConfigProvider&,
   graphics::RT7Core&, std::function<shared_ptr<ui::Component> (unsigned char,
   unsigned short)>) */

    void InterfaceList::InterfaceList(undefined8 param_1, ConfigProvider* param_2, RT7Core* param_3,
                                      function* param_5) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>::function(
            (function<shared_ptr<ui::Component>(unsigned char, unsigned short)>*)&field_32, param_5);
        new (&field_80) eastl::vector<shared_ptr<ui::Interface>, eastl::allocator>();
    }

    // 0x100535b00, 16 bytes, complete-object constructor, placed by class name and debug map
    // InterfaceList::InterfaceList(Js5ResourceProvider&, ConfigProvider&, graphics::RT7Core&, std::function<shared_ptr<ui::Component> (unsigned char, unsigned short)>): jumps straight to the base-object constructor

    // 0x100535b10, 288 bytes, placed by class name and debug map
    // InterfaceList::GetInterface(int, bool)
    undefined* InterfaceList::GetInterface(int param_1, bool param_2) {
        undefined1* this_00;
        int iVar3;
        shared_ptr* this_01;
        undefined* puVar4;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        shared_ptr<ui::Interface>* this_03;
        shared_ptr asStackY_848[128];
        _func_void_Component_ptr_PacketT_ptr_int* in_stack_ffffffffffffffb8;
        code* local_38;
        undefined1 local_2d;
        int local_2c;

        this_00 = &field_80;
        local_2d = param_2;
        local_2c = param_1;
        iVar3 = this_00->size();
        if (param_1 < iVar3) {
            this_01 = (shared_ptr*)eastl::vector<shared_ptr<ui::Interface>, eastl::allocator>::operator[](
                (vector<shared_ptr<ui::Interface>, eastl::allocator>*)this_00, (long)local_2c);
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                puVar4 = (undefined*)eastl::vector<shared_ptr<ui::Interface>, eastl::allocator>::operator[](
                    (vector<shared_ptr<ui::Interface>, eastl::allocator>*)this_00, (long)local_2c);
                return puVar4;
            }
        }
        this_02 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(field_8, local_2c)
                ->GetInterfacePacketGroup();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_02) == '\0') {
            local_38 = DecodeGameComponent;
            MakeSharedPool<ui::Interface, 128>::MakeShared<
                int&, bool&, eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>&,
                std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>&,
                void (*)(ui::Component*, PacketT<Array<unsigned char, eastl::allocator>>&, int)>(
                asStackY_848 + 128, (MakeSharedPool<ui::Interface, 128>*)&local_2c, (int*)&local_2d, (bool*)this_02,
                (vector*)&field_32, (function*)&local_38, in_stack_ffffffffffffffb8);
            iVar3 = this_00->size();
            if (iVar3 <= local_2c) {
                this_00->resize((long)local_2c + 1);
            }
            this_03 =
                (shared_ptr<ui::Interface>*)eastl::vector<shared_ptr<ui::Interface>, eastl::allocator>::operator[](
                    (vector<shared_ptr<ui::Interface>, eastl::allocator>*)this_00, (long)local_2c);
            shared_ptr<ui::Interface>::operator=(this_03, asStackY_848 + 128);
            puVar4 = (undefined*)eastl::vector<shared_ptr<ui::Interface>, eastl::allocator>::operator[](
                (vector<shared_ptr<ui::Interface>, eastl::allocator>*)this_00, (long)local_2c);
            ((asStackY_848 + 128))->~shared_ptr();
        } else {
            puVar4 = PTR_NullInterfaceShared_100ee64a0;
        }
        return puVar4;
    }

    // 0x100535e50, 32 bytes, placed by class name and debug map
    // InterfaceList::GetComponent(unsigned int, int)
    void InterfaceList::GetComponent(uint param_1, int param_2) {
        if (param_2 == -1) {
            GetStaticComponent(this, param_1);
            return;
        }
        GetDynamicComponent(this, param_1, param_2);
    }

    // 0x100535e70, 96 bytes, placed by class name and debug map
    // InterfaceList::GetStaticComponent(unsigned int)
    undefined* InterfaceList::GetStaticComponent(uint param_1) {
        shared_ptr* this_00;
        Interface* this_01;

        if (param_1 != 4294967295) {
            this_00 = (shared_ptr*)GetInterface(this, param_1 >> 16, false);
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                this_01 = (Interface*)shared_ptr<ui::Interface>::operator->((shared_ptr<ui::Interface>*)this_00);
                return (undefined*)this_01->GetStaticComponent(param_1 & 65535);
            }
        }
        return PTR_NullComponentShared_100ee6498;
    }

    // 0x100535ed0, 112 bytes, placed by class name and debug map
    // InterfaceList::GetDynamicComponent(unsigned int, unsigned int)
    undefined* InterfaceList::GetDynamicComponent(uint param_1, uint param_2) {
        bool bVar1;
        shared_ptr* this_00;
        long* plVar3;
        ComponentCollectionBase* this_01;
        undefined* puVar4;

        this_00 = (shared_ptr*)GetStaticComponent(this, param_1);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        puVar4 = PTR_NullComponentShared_100ee6498;
        if (bVar1) {
            plVar3 = (long*)shared_ptr<ui::Component>::operator->((shared_ptr<ui::Component>*)this_00);
            if ((**(code**)(*plVar3 + 104))(plVar3) != '\0') {
                this_01 = (ComponentCollectionBase*)this_00->end();
                puVar4 = (undefined*)this_01->GetDynamicChild(param_2);
            }
        }
        return puVar4;
    }

    // 0x100535fa0, 176 bytes, placed by class name and debug map
    // InterfaceList::CloseInterface(int)
    void InterfaceList::CloseInterface(int param_1) {
        Interface* this_00;
        TextureManager* this_01;
        SpriteAtlasManager* this_02;
        int iVar2;
        shared_ptr* this_03;
        vector local_38[24];

        iVar2 = (&field_80)->size();
        if (param_1 < iVar2) {
            this_03 = (shared_ptr*)eastl::vector<shared_ptr<ui::Interface>, eastl::allocator>::operator[](
                (vector<shared_ptr<ui::Interface>, eastl::allocator>*)&field_80, (long)param_1);
            if (shared_ptr::operator_cast_to_bool(this_03)) {
                eastl::vector<unsigned int, BucketAllocatorEASTL>::vector();
                this_00 = (Interface*)shared_ptr<ui::Interface>::operator->((shared_ptr<ui::Interface>*)this_03);
                this_00->GetChildCombinedIDs(local_38);
                this_01 = (TextureManager*)field_16->GetTextureManager();
                this_02 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
                this_02->UnregisterSpriteIDAlwaysLoaded(local_38);
                shared_ptr<ui::Interface>::reset();
                local_38->~vector();
            }
        }
    }

    // 0x1005360e0, 16 bytes, placed by class name
    // InterfaceList::Clear()
    void InterfaceList::Clear() {
        (&field_80)->clear();
    }

} // namespace jag::game
