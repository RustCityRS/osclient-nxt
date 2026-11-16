// projects/osclient/EndpointURLProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "EndpointURLProvider.h"

namespace jag::oldscape {
    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    EndpointURLProvider::~EndpointURLProvider();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    EndpointURLProvider::~EndpointURLProvider();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    EndpointURLProvider::~EndpointURLProvider();

    // 0x100184070, 256 bytes, placed by class name and debug map
    // EndpointURLProvider::GetEndpointURL(eastl::string&, std::basic_string_view<char, std::char_traits<char> >) const
    /* EndpointURLProvider::GetEndpointURL(eastl::string&,
   std::basic_string_view<char, std::char_traits<char> >) const */

    bool EndpointURLProvider::GetEndpointURL(eastl::string* param_1, undefined8 param_3, undefined8 param_4) {
        ulong uVar1;
        long lVar2;
        long lVar3;
        long lVar4;
        char* pcVar5;
        undefined8 uVar6;
        bool bVar7;
        undefined8 local_40;
        undefined8 local_38;

        local_40 = param_3;
        local_38 = param_4;
        uVar1 =
            (&GetEndpointURL(eastl::string&, std::basic_string_view<char, std::char_traits<char>>)::USER_ID_FORMAT_STR)
                ->data();
        uVar1 = std::basic_string_view<char, std::char_traits<char>>::find((char*)&local_40, uVar1);
        if (uVar1 == 18446744073709551615) {
            pcVar5 = (char*)local_40.data();
            uVar1 = local_40.size();
            eastl::string::assign(param_1, pcVar5, uVar1);
            bVar7 = true;
        } else {
            lVar2 = field_8->GetAccountID();
            if (lVar2 == -1) {
                uVar6 = logger::default_logger();
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/EndpointURLProvider.cpp",
                                    25, "ClientCRMView data provider - Not logged in");
            } else {
                lVar3 = local_40.data();
                lVar4 = (&GetEndpointURL(eastl::string&,
                                         std::basic_string_view<char, std::char_traits<char>>)::USER_ID_FORMAT_STR)
                            ->size();
                eastl::string::sprintf((char*)param_1, "%.*s%llu%s", uVar1 & 4294967295, lVar3, lVar2,
                                       uVar1 + lVar3 + lVar4);
            }
            bVar7 = lVar2 != -1;
        }
        return bVar7;
    }

} // namespace jag::oldscape
