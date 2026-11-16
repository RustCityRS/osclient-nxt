// projects/osclient/ClientScript.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ClientScript {
    public:
        shared_ptr* Get(int);
        ClientScript* DecodeScript(PacketJ<Array<unsigned char, eastl::allocator>>&);
        shared_ptr* Get(rs2lib::ClientTriggerType::ID, int, int);
        shared_ptr* FindTriggeredScript(int, rs2lib::ClientTriggerType::ID);
        ClientScript();
        ~ClientScript();
        static LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long> /* 10496 bytes */
            m_cache; // = LRUHashCache<ClientScript,128ul,129ul,false,unsigned long long>(128, "LRUHashCache")

        // data members, from how the methods use this: 137 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[121];
    };

    class ScriptTriggerHelpers {
    public:
        int GetScriptHash(int, int);
        int GetCategoryScriptHash(int, int);
        int GetGlobalScriptHash(int);
        eastl::string HashToJs5GroupString<eastl::string>(int);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1001815c0, 16 bytes, inline, placed by debug map only (low confidence)
    // ScriptTriggerHelpers::GetScriptHash(int, int)
    int ScriptTriggerHelpers::GetScriptHash(int param_1, int param_2) {
        return param_1 * 256 + param_2;
    }

    // 0x100181760, 32 bytes, inline, placed by debug map only (low confidence)
    // ScriptTriggerHelpers::GetCategoryScriptHash(int, int)
    int ScriptTriggerHelpers::GetCategoryScriptHash(int param_1, int param_2) {
        return param_2 + param_1 * -256 + -768;
    }

    // 0x100181780, 16 bytes, inline, placed by debug map only (low confidence)
    // ScriptTriggerHelpers::GetGlobalScriptHash(int)
    int ScriptTriggerHelpers::GetGlobalScriptHash(int param_1) {
        return param_1 + -512;
    }

    // 0x100181790, 80 bytes, inline, placed by debug map only (low confidence)
    // eastl::string ScriptTriggerHelpers::HashToJs5GroupString<eastl::string >(int)
    ScriptTriggerHelpers* ScriptTriggerHelpers::HashToJs5GroupString<eastl::string>(int param_1) {
        new (this) eastl::string();
        eastl::string::sprintf((char*)this, "%i", (ulong)(uint)param_1);
        return this;
    }

    // 0x1001aa770, 16 bytes, complete-object constructor, inline, placed by class name
    // ClientScript::ClientScript(): jumps straight to the base-object constructor

    // 0x1001aa780, 144 bytes, base-object constructor, inline, placed by class name
    // ClientScript::ClientScript()
    void ClientScript::ClientScript() {
        new (this) eastl::string();
        new (&field_40) Array<ScriptOp, eastl::allocator>();
        new (&field_64) Array<int, eastl::allocator>();
        new (&field_88) Array<eastl::string, eastl::allocator>();
        new (&field_136)
            eastl::vector<eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                          eastl::allocator>();
    }

    // 0x1001aa9f0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientScript::~ClientScript(): jumps straight to the base-object destructor

    // 0x1001aaa00, 64 bytes, base-object destructor, inline, placed by class name
    // ClientScript::~ClientScript()
    void ClientScript::~ClientScript() {
        (&field_136)->~vector();
        (&field_88)->~Array();
        (&field_64)->~Array();
        (&field_40)->~Array();
        ~basic_string();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1001817f0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientScript>::type make_shared<oldscape::ClientScript>()
    jag* make_shared<oldscape::ClientScript>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ClientScript* local_28[2];

        pvVar1 = (void*)aligned_alloc(200, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::ClientScript>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientScript>, int, oldscape::ClientScript*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1001818c0, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::SetPos(unsigned long)
    void PacketT<Array<unsigned char, eastl::allocator>>::SetPos(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                 ulong param_1) {
        ulong uVar1;

        uVar1 = end();
        if (uVar1 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("_pos <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 176,
                      "Packet: Invalid pos");
        }
        *(ulong*)(this + 24) = param_1;
    }

    // 0x100181910, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g2()
    ushort PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g2(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        return gT<unsigned short>(this);
    }

    // 0x100181920, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g4()
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g4(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        gT<unsigned int>(this);
    }

    // 0x100181930, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g1()
    undefined1 PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g1(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        undefined1* puVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        puVar2 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar1);
        return *puVar2;
    }

    // 0x100181a30, 80 bytes, inline, placed by debug map only (low confidence)
    // eastl::string PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringCP1252ToUTF8<eastl::string >(bool)
    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*
    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, bool param_1) {
        bool in_DL;
        undefined7 in_register_00000031;

        new (this) eastl::string();
        gStringCP1252ToUTF8<eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                               CONCAT71(in_register_00000031, param_1),
                                           (basic_string*)this, in_DL);
        return this;
    }

} // namespace jag
