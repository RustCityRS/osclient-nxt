// libs/ui/components/ComponentBehaviourConfigs.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ComponentOpConfig {
    public:
        void SetTargetVerb(char const*);
        void SetOpBaseName(char const*);
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        GetOpName(int) const;
        void SetOpName(int, char const*);
        GetOpCursor(int) const;
        void SetOpCursor(int, int);
        ComponentOpConfig();
        ~ComponentOpConfig();

        // data members, from how the methods use this: 144 bytes
        char _unknown_0[72];
        undefined1 field_72; // offset 72
        char _unknown_73[63];
        undefined2 field_136; // offset 136
        char _unknown_138[6];
    };

} // namespace jag::ui
