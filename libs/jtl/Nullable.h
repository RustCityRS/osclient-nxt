// libs/jtl/Nullable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 6 instantiations, e.g. <bool>, <eastl::string >, <int>
    class Nullable {
    public:
        Nullable<oldscape::LocLayer> IsNull();
        Nullable(Nullable<bool>& nullable);
        Nullable();
        EnvironmentOverrideParam<int> IsNull();
        bool IsNull();
        void SetNull();
        Nullable(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>&& nullable);
        ~Nullable();
        Nullable(Array<shared_ptr<oldscape::rs2lib::IfType>> ifTypes);
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>*
        operator=(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>&& nullable);
        Nullable<int>(int&& arg1);
        Nullable(int arg1);
        Nullable<unsigned int>(unsigned int&& arg1);
        Nullable(long long arg1);
        Nullable(eastl::string str);
        Nullable(oldscape::LocLayer locLayer);
    };

    // 0x100121be0
    Nullable<oldscape::LocLayer> Nullable<bool>::IsNull() {
        return this[1];
    }

    // 0x1001319f0
    Nullable<bool>::Nullable(Nullable<bool>& nullable) {
        *(uint16_t*)this = *(uint16_t*)nullable;
    }

    // 0x10014d7f0
    Nullable<bool>::Nullable() {
        this[1] = (Nullable<oldscape::LocLayer>)1;
    }

    // 0x100191340
    EnvironmentOverrideParam<int> Nullable<int>::IsNull() {
        return this[4];
    }

    // 0x1001acac0
    bool Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::IsNull() {
        return m_lightLevelsBelow;
    }

    // 0x1001acbd0
    void Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::SetNull() {

        Array<shared_ptr<oldscape::rs2lib::IfType>> local_30;
        *this = local_30;
        this[24] = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>)1;
    }

    // 0x1001acf80
    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::Nullable(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>&& nullable)
        : Array<shared_ptr<oldscape::rs2lib::IfType>>(nullable) {
        *(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>> _>*)(this + 24) = nullable[24];
    }

    // 0x1001ad050
    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::Nullable() : Array<shared_ptr<oldscape::rs2lib::IfType>>() {
        this[24] = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>)1;
    }

    // 0x1001ad100
    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::~Nullable() {}

    // 0x1001ae1f0
    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>*
    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::operator=(
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>&& nullable) {
        *this = nullable;
        *(Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>> _>*)(this + 24) = nullable[24];
        return this;
    }

    // 0x1001ae330
    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::Nullable<int>(int&& arg1)
        : Array<shared_ptr<oldscape::rs2lib::IfType>>() {

        Array<shared_ptr<oldscape::rs2lib::IfType>> local_38((long)*arg1);
        *this = local_38;
        this[24] = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>)0;
    }

    // 0x1001ae3e0
    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::Nullable(Array<shared_ptr<oldscape::rs2lib::IfType>> ifTypes)
        : Array<shared_ptr<oldscape::rs2lib::IfType>>() {
        *this = *ifTypes;
        this[24] = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>)0;
    }

    // 0x10027c740
    Nullable<int>::Nullable() {
        this[4] = (Nullable<int>)1;
    }

    // 0x10027c750
    Nullable<int>::Nullable(int arg1) {
        *(int*)this = arg1;
        this[4] = (Nullable<int>)0;
    }

    // 0x10027c760
    Nullable<int>::Nullable<unsigned int>(unsigned int&& arg1) {
        *(unsigned int*)this = arg1;
        this[4] = (pair<int const, bool>)0;
    }

    // 0x10027c770
    Nullable<long long>::Nullable() {
        this[8] = (MyDocument)1;
    }

    // 0x10027c780
    Nullable<long long>::Nullable(long long arg1) {
        *(long long*)this = arg1;
        this[8] = (Nullable<long long>)0;
    }

    // 0x10027c790
    Nullable<eastl::string>::Nullable() : eastl::string() {
        this[32] = (Nullable<eastl::string>)1;
    }

    // 0x10027c7b0
    Nullable<eastl::string>::Nullable(eastl::string str) : eastl::string() {
        *this = str;
        this[32] = (Nullable<eastl::string>)0;
    }

    // 0x100333d30
    Nullable<oldscape::LocLayer>::Nullable(oldscape::LocLayer locLayer) {
        *this = (uint8_t)locLayer;
        this[1] = (Nullable<bool>)0;
    }

} // namespace jag
