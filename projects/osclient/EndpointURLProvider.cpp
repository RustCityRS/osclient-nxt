// projects/osclient/EndpointURLProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "EndpointURLProvider.h"

namespace jag::oldscape {
    // 0x100022b10: EndpointURLProvider::~EndpointURLProvider() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: EndpointURLProvider::~EndpointURLProvider() has the same machine code as void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*)

    // 0x100184070
    bool EndpointURLProvider::GetEndpointURL(eastl::string& str1, std::basic_string_view<char> str2) const {
        long lVar2;
        long lVar3;
        long lVar4;
        char* str;
        bool bVar5;
        uint8_t auVar6[16];
        basic_string_view<char, std::char_traits<char> _>* local_40[2];

        local_40[0] = str2;
        auVar6 = ((basic_string_view<char>*)&GetEndpointURL(eastl::string&,
                                                            std::basic_string_view<char>)::USER_ID_FORMAT_STR)
                     ->data();
        unsigned long uVar1 = local_40->find(auVar6._0_8_, auVar6._8_8_);
        if (uVar1 == 18446744073709551615) {
            str = (char*)local_40->data();
            uVar1 = local_40->size();
            str1.assign(str, uVar1);
            bVar5 = true;
        } else {
            lVar2 = field_8->GetAccountID();
            if (lVar2 == -1) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "EndpointURLProvider.cpp",
                          25, "ClientCRMView data provider - Not logged in");
            } else {
                lVar3 = local_40->data();
                lVar4 = ((basic_string_view<char>*)&GetEndpointURL(eastl::string&,
                                                                   std::basic_string_view<char>)::USER_ID_FORMAT_STR)
                            ->size();
                str1.sprintf("%.*s%llu%s", uVar1 & 4294967295, lVar3, lVar2, uVar1 + lVar3 + lVar4);
            }
            bVar5 = lVar2 != -1;
        }
        return bVar5;
    }

} // namespace jag::oldscape
