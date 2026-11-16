// projects/osclient/EndpointURLProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class EndpointURLProvider {
    public:
        // virtual methods in vtable order
        virtual ~EndpointURLProvider();
        virtual bool GetEndpointURL(eastl::string& str1, std::basic_string_view<char> str2) const;
        EndpointURLProvider(const Client& client);

    private:
        Client* field_8;
    };

    // 0x100128950
    EndpointURLProvider::EndpointURLProvider(const Client& client)
        : http::CRMData::ClientDataProvider(), field_8(client) {}

} // namespace jag::oldscape
