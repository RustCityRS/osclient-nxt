// projects/osclient/EndpointURLProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class EndpointURLProvider {
    public:
        // virtual methods in vtable order
        virtual ~EndpointURLProvider();
        virtual bool GetEndpointURL(eastl::string&, std::basic_string_view<char, std::char_traits<char>>) const;
        EndpointURLProvider(Client const&);

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        Client* field_8;     // offset 8
    };

    // 0x1000c4380, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EndpointURLProvider::EndpointURLProvider(Client const&): jumps straight to the base-object constructor

    // 0x100128950, 48 bytes, base-object constructor, inline, placed by class name
    // EndpointURLProvider::EndpointURLProvider(Client const&)
    void EndpointURLProvider::EndpointURLProvider(Client* param_1) {
        new (this) http::CRMData::ClientDataProvider();
        field_0 = &PTR__ScriptOption_100ef5d10;
        field_8 = param_1;
    }

} // namespace jag::oldscape
