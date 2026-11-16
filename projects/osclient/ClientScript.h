// projects/osclient/ClientScript.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ClientScript {
    public:
        shared_ptr<ClientScript>* Get(int arg1);
        ClientScript* DecodeScript(PacketJ<Array<unsigned char>>& packetJ);
        shared_ptr<ClientScript>* Get(rs2lib::ClientTriggerType::ID id, int arg2, int arg3);
        shared_ptr<ClientScript>* FindTriggeredScript(int arg1, rs2lib::ClientTriggerType::ID id);
        ClientScript();
        ~ClientScript();
        static LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>
            m_cache; // = LRUHashCache<ClientScript, 128ul, 129ul, false, unsigned long long>(128, "LRUHashCache")

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[121];
    };

    class ScriptTriggerHelpers {
    public:
        int GetScriptHash(int arg1, int arg2);
        int GetCategoryScriptHash(int arg1, int arg2);
        int GetGlobalScriptHash(int arg1);
        eastl::string HashToJs5GroupString<eastl::string>(int arg1);
    };

    // 0x1001815c0
    int ScriptTriggerHelpers::GetScriptHash(int arg1, int arg2) {
        return arg1 * 256 + arg2;
    }

    // 0x100181760
    int ScriptTriggerHelpers::GetCategoryScriptHash(int arg1, int arg2) {
        return arg2 + arg1 * -256 - 768;
    }

    // 0x100181780
    int ScriptTriggerHelpers::GetGlobalScriptHash(int arg1) {
        return arg1 - 512;
    }

    // 0x100181790
    eastl::string ScriptTriggerHelpers::HashToJs5GroupString<eastl::string>(int arg1) {
        unsigned int in_ESI;
        uint32_t in_register_0000003c;
        eastl::string* basic_string;

        basic_string = (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        new (basic_string) eastl::string();
        basic_string->sprintf("%i", (unsigned long)in_ESI);
        return basic_string;
    }

    // 0x1001aa780
    ClientScript::ClientScript() : eastl::string() {}

    // 0x1001aaa00
    ClientScript::~ClientScript() {
        field_136.~vector();
        field_88.~Array();
        field_64.~Array();
        field_40.~Array();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1001817f0
    shared_ptr_if_not_array<oldscape::ClientScript>::type make_shared<oldscape::ClientScript>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ClientScript* local_28[2];

        auto arg1 = aligned_alloc(200, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::ClientScript>::type result;
        } else {
            local_28[0] = placement_new<oldscape::ClientScript>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientScript>, int, oldscape::ClientScript*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1001818c0
    void PacketT<Array<unsigned char>>::SetPos(unsigned long arg1) {
        if (end() < arg1) {
            LogAssert("_pos <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 176,
                      "Packet: Invalid pos");
        }
        *(unsigned long*)(this + 24) = arg1;
    }

    // 0x100181910
    unsigned short PacketReaderMixin<PacketT<Array<unsigned char>>>::g2() {
        return gT<unsigned short>(this);
    }

    // 0x100181920
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::g4() {
        gT<unsigned int>(this);
    }

    // 0x100181930
    uint8_t PacketReaderMixin<PacketT<Array<unsigned char>>>::g1() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        uint8_t* puVar1 = (uint8_t*)(*this)[arg1];
        return *puVar1;
    }

    // 0x100181a30
    eastl::string PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(bool arg1) {
        bool in_DL;
        uint64_t in_register_00000031;

        new (this) eastl::string();
        gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1),
            (eastl::string*)this, in_DL);
        return this;
    }

} // namespace jag
