// libs/game/runetek5/config/iftype/InterfaceList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class InterfaceList {
    public:
        InterfaceList(Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider,
                      graphics::RT7Core& rt7Core,
                      std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)> callback);
        shared_ptr<ui::Interface>* GetInterface(int arg1, bool arg2);
        void GetComponent(unsigned int arg1, int arg2);
        uint8_t* GetStaticComponent(unsigned int arg1);
        uint8_t* GetDynamicComponent(unsigned int arg1, unsigned int arg2);
        void CloseInterface(int arg1);
        void Clear();

    private:
        Js5ResourceProvider* field_0;
        ConfigProvider* field_8;
        RT7Core* field_16;
        uint8_t _unknown_24[64];
    };

    // 0x100535a80
    InterfaceList::InterfaceList(Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider,
                                 graphics::RT7Core& rt7Core,
                                 std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)> callback)
        : field_0(js5ResourceProvider), field_8(configProvider), field_16(rt7Core), field_32(*callback) {}

    // 0x100535b10
    shared_ptr<ui::Interface>* InterfaceList::GetInterface(int arg1, bool arg2) {
        shared_ptr<ui::Interface>* psVar3;
        shared_ptr<ui::Interface> local_48;
        void* local_38;

        uint8_t* this_00 = &field_80;
        vector<PacketT<Array<unsigned char> _>> local_2d = (vector<PacketT<Array<unsigned char> _>>)arg2;
        int local_2c = arg1;
        int iVar2 = this_00->size();
        if (arg1 < iVar2) {
            if (((*this_00)[(long)local_2c])->operator_cast_to_bool()) {
                psVar3 = (shared_ptr<ui::Interface>*)(*this_00)[(long)local_2c];
                return psVar3;
            }
        }
        auto this_02 = field_8->GetInterfacePacketGroup(local_2c);
        if (!(this_02->empty())) {
            local_38 = DecodeGameComponent;
            MakeSharedPool<ui::Interface,
                           128>::MakeShared<int&, bool&, eastl::vector<PacketT<Array<unsigned char>>>&,
                                            std::function<shared_ptr<ui::Component>(unsigned char, unsigned short)>&,
                                            void (*)(ui::Component*, PacketT<Array<unsigned char>>&, int)>(
                &local_48, (bool*)&local_2c, &local_2d,
                (function<shared_ptr<ui::Component> _(unsigned char, unsigned short)>*)this_02,
                (void_______jag__ui__Component___jag__PacketT<Array<unsigned char> _> ___int_*)&field_32);
            iVar2 = this_00->size();
            if (iVar2 <= local_2c) {
                this_00->resize((long)local_2c + 1);
            }
            psVar3 = (shared_ptr<ui::Interface>*)(*this_00)[(long)local_2c];
            *psVar3 = local_48;
            psVar3 = (shared_ptr<ui::Interface>*)(*this_00)[(long)local_2c];
        } else {
            psVar3 = (shared_ptr<ui::Interface>*)PTR_NullInterfaceShared_100ee64a0;
        }
        return psVar3;
    }

    // 0x100535e50
    void InterfaceList::GetComponent(unsigned int arg1, int arg2) {
        if (arg2 == -1) {
            GetStaticComponent(arg1);
            return;
        }
        GetDynamicComponent(arg1, arg2);
    }

    // 0x100535e70
    uint8_t* InterfaceList::GetStaticComponent(unsigned int arg1) {
        shared_ptr* this_00;
        Interface* this_01;

        if (arg1 != 4294967295) {
            this_00 = (shared_ptr*)GetInterface(arg1 >> 16, false);
            if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                this_01 = (Interface*)(*this_00).operator->();
                return (uint8_t*)this_01->GetStaticComponent(arg1 & 65535);
            }
        }
        return PTR_NullComponentShared_100ee6498;
    }

    // 0x100535ed0
    uint8_t* InterfaceList::GetDynamicComponent(unsigned int arg1, unsigned int arg2) {
        long* plVar2;
        ComponentCollectionBase* this_01;

        auto this_00 = GetStaticComponent(arg1);
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_00);
        uint8_t* puVar3 = PTR_NullComponentShared_100ee6498;
        if (cVar1) {
            plVar2 = (long*)(*this_00).operator->();
            cVar1 = (**(void (**)(...))(*plVar2 + 104))(plVar2);
            if (cVar1) {
                this_01 = (ComponentCollectionBase*)this_00->end();
                puVar3 = (uint8_t*)this_01->GetDynamicChild(arg2);
            }
        }
        return puVar3;
    }

    // 0x100535fa0
    void InterfaceList::CloseInterface(int arg1) {
        shared_ptr* this_00;
        vector<unsigned int, BucketAllocatorEASTL> local_38;

        int iVar2 = field_80.size();
        if (arg1 < iVar2) {
            this_00 = &field_80[(long)arg1];
            if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                local_38 = eastl::vector<unsigned int, BucketAllocatorEASTL>();
                ((Interface*)(*this_00).operator->())->GetChildCombinedIDs(local_38);
                (field_16->GetTextureManager()->GetSpriteAtlasManager())->UnregisterSpriteIDAlwaysLoaded(&local_38);
                this_00->reset();
            }
        }
    }

    // 0x1005360e0
    void InterfaceList::Clear() {
        field_80.clear();
    }

} // namespace jag::game
