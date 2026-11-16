// libs/oldscape/jagex3/javapal/JavConfigReader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "JavConfigReader.h"

namespace jag::oldscape {
    // 0x1002b2d30, 208 bytes, base-object constructor, placed by class name and debug map
    // JavConfigReader::JavConfigReader(eastl::string const&)
    void JavConfigReader::JavConfigReader(basic_string* param_1) {
        eastl::string local_58[32];
        allocator local_38[8];

        new (this) eastl::string(param_1);
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_32);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, "universal", local_38);
        new (&field_40, (basic_string*)local_58) AppletConfig();
        eastl::string::~basic_string(local_58);
        new (&field_240) eastl::list<AppletConfig, eastl::allocator>();
        new (&field_272) eastl::list<LanguageMessage, eastl::allocator>();
    }

    // 0x1002b2e50, 16 bytes, complete-object constructor, placed by class name and debug map
    // JavConfigReader::JavConfigReader(eastl::string const&): jumps straight to the base-object constructor

    // 0x1002b2e60, 400 bytes, placed by class name and debug map
    // JavConfigReader::Process(int)
    ulong JavConfigReader::Process(int param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        HTTPRequest* pHVar4;
        basic_string* pbVar5;
        undefined8 uVar6;
        HTTPRequest* unaff_RBX;
        ulong uVar7;
        undefined4 in_register_00000034;
        hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                 eastl::allocator, false>
            local_60[56];

        pHVar4 = (HTTPRequest*)CONCAT44(in_register_00000034, param_1);
        this_00 = &field_32;
        bVar1 = std::operator==((unique_ptr*)this_00, (_func_decltype_nullptr*)pHVar4);
        if (bVar1) {
            pHVar4 = operator_new(664);
            http::HTTPRequest::HTTPRequest(pHVar4, 0);
            this_00->reset(pHVar4);
            unaff_RBX = (HTTPRequest*)local_60;
            new (unaff_RBX)
                eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                eastl::equal_to<eastl::string>, eastl::allocator, false>((hash_map*)&field_184);
            pHVar4 = unaff_RBX;
            HardcodedMessages::AddMessages(param_1);
            eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                            eastl::allocator, false>::~hash_map(local_60);
        }
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar2 == '\0') {
            bVar1 = std::operator==((unique_ptr*)this_00, (_func_decltype_nullptr*)pHVar4);
            if (bVar1) {
                unaff_RBX = operator_new(664);
                http::HTTPRequest::HTTPRequest(unaff_RBX, 0);
                this_00->reset(unaff_RBX);
            }
            pHVar4 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            iVar3 = pHVar4->GetState();
            if (iVar3 == 2) {
                unaff_RBX = (HTTPRequest*)logger::default_logger();
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(unaff_RBX, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/javapal/JavConfigReader.cpp",
                                    65, "Failed to fetch JavConfig from url: %s", uVar6);
            } else {
                if (iVar3 != 1) {
                    if (iVar3 == 0) {
                        pbVar5 =
                            (basic_string*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        pbVar5->Get();
                    }
                    uVar7 = 0;
                    goto LAB_1002b2faa;
                }
                ProcessData(this);
            }
            this_00->reset(0);
            uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        } else {
            bVar1 = std::operator!=((unique_ptr*)this_00, (_func_decltype_nullptr*)pHVar4);
            uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
            if (bVar1) {
                this_00->reset(0);
            }
        }
    LAB_1002b2faa:
        return uVar7 & 4294967295;
    }

    // 0x1002b3030, 4288 bytes, placed by neighbouring functions
    // HardcodedMessages::AddMessages(int, eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false>)
    void HardcodedMessages::AddMessages(undefined4 param_1,
                                        hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                 eastl::equal_to<eastl::string>, eastl::allocator, false>* param_2) {
        eastl::string* pbVar1;
        eastl::string local_48[32];
        allocator local_28[8];

        switch (param_1) {
        case 0:
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_missing_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Missing com.jagex.config setting");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_invalid_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Invalid com.jagex.config setting");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loading_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Loading configuration");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_load_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1,
                                  "There was an error loading the game configuration from the website.\nIf you have a "
                                  "firewall, check that this program is allowed to access the Internet.");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_decode_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Error decoding configuration");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loaderbox_initial", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Loading...");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "error", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Error");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "quit", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Quit");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "alreadyopen", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Please close your existing game before loading another one");
            break;
        case 1:
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_missing_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Einstellung com.jagex.config fehlt");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_invalid_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Einstellung_com_jagex_config_ist_100db937d);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loading_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Lade Konfiguration");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_load_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Beim_Laden_der_Spielkonfiguratio_100db93bb);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_decode_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Fehler_beim_Entschl_sseln_der_Ko_100db943d);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loaderbox_initial", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Lade...");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "error", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Fehler");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "quit", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Beenden");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "alreadyopen", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Bitte_schlie_e_dein_bestehendes_S_100db9481);
            break;
        case 2:
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_missing_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Param_tre_com_jagex_config_manqu_100db94c8);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_invalid_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Param_tre_com_jagex_config_non_v_100db94ed);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loading_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Chargement de la configuration");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_load_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Une_erreur_s_est_produite_lors_d_100db9533);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_decode_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Erreur_de_d_codage_de_configurat_100db95e8);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loaderbox_initial", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Chargement...");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "error", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Erreur");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "quit", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Quitter");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "alreadyopen", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Veuillez_fermer_votre_session_de_100db962a);
            break;
        case 3:
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_missing_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Faltando_configura_o_de_com_jage_100db967c);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_invalid_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Configura_o_inv_lida_de_com_jage_100db96a8);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loading_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Carregando_configura_o_100db96d5);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_load_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Houve_um_erro_quando_a_configura_100db96ef);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_decode_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Erro_ao_decodificar_configura_o_100db978b);
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loaderbox_initial", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Carregando...");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "error", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Erro");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "quit", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Fechar");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "alreadyopen", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, s_Feche_a_sua_sess_o_de_jogo_atual_100db97c8);
            break;
        case 4:
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_missing_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Missing com.jagex.config setting");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_invalid_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Invalid com.jagex.config setting");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loading_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Loading config");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_load_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Error loading config");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_decode_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Error decoding config");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loaderbox_initial", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Loading...");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "error", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Error");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "quit", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Quit");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "alreadyopen", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Please close your existing game before loading another one");
            break;
        case 5:
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_missing_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Missing com.jagex.config setting");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_invalid_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Invalid com.jagex.config setting");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loading_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Loading config");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_load_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Error loading config");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "err_decode_config", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Error decoding config");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "loaderbox_initial", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Loading...");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "error", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Error");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "quit", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Quit");
            eastl::string::~basic_string(local_48);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "alreadyopen", local_28);
            pbVar1 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                     eastl::equal_to<eastl::string>, eastl::allocator,
                                                     false>::operator[](param_2, (basic_string*)local_48);
            eastl::string::assign(pbVar1, "Cierra tu partida actual antes de abrir otra");
            break;
        default:
            goto switchD_1002b3059_default;
        }
        eastl::string::~basic_string(local_48);
    switchD_1002b3059_default:
    }

    // 0x1002b4120, 528 bytes, placed by class name and debug map
    // JavConfigReader::ProcessData()
    void JavConfigReader::ProcessData() {
        char cVar1;
        int iVar2;
        RT7Core* this_00;
        Array* pAVar3;
        AppletConfig* pAVar4;
        JavConfigReader* pJVar5;
        basic_string* pbVar6;
        AppletConfig local_1c8;
        undefined1 local_100[104];
        ConfigReader local_98;
        Array<unsigned char, eastl::allocator> local_78[24];
        ConfigReader local_60;
        list<AppletConfig, eastl::allocator>* local_40;

        this_00 = (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_32);
        pAVar3 = (Array*)this_00->GetMSAASampleCount();
        Array<unsigned char, eastl::allocator>::Array(local_78, pAVar3);
        new (&local_60) ConfigReader(local_78);
        pAVar4 = (AppletConfig*)&field_40;
        local_40 = (list<AppletConfig, eastl::allocator>*)&field_240;
        do {
            local_100->NextParameter();
            cVar1 = local_100->IsNull();
            if (cVar1 == '\0') {
                pJVar5 = (JavConfigReader*)local_100->Name();
                iVar2 = pJVar5->compare("param");
                if (iVar2 == 0) {
                    pJVar5 = (JavConfigReader*)local_100;
                    pbVar6 = (basic_string*)local_100->Value();
                    iVar2 = 2;
                    ParseParam(pJVar5, pbVar6, pAVar4);
                } else {
                    iVar2 = pJVar5->compare("msg");
                    if (iVar2 == 0) {
                        pbVar6 = (basic_string*)local_100->Value();
                        iVar2 = 2;
                        ParseMsg((JavConfigReader*)this, pbVar6, pAVar4);
                    } else {
                        iVar2 = 2;
                        ParseOurConfig(pJVar5, (ConfigParameter*)local_100, pAVar4);
                    }
                }
            } else {
                local_98.NextHeader();
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                iVar2 = 3;
                if (cVar1 == '\0') {
                    new (&local_1c8) AppletConfig((basic_string*)&local_98);
                    pAVar4 = (AppletConfig*)local_1c8.SSOBeginPtr((type*)&local_98);
                    eastl::list<AppletConfig, eastl::allocator>::emplace_back<AppletConfig>(local_40, pAVar4);
                    pAVar4 = (AppletConfig*)eastl::list<AppletConfig, eastl::allocator>::back();
                    local_1c8.~AppletConfig();
                    iVar2 = 0;
                }
                local_98.~basic_string();
            }
            local_100->~ConfigParameter();
        } while (iVar2 != 3);
        local_60.~ConfigReader();
        local_78->~Array();
    }

    // 0x1002b4330, 128 bytes, placed by class name and debug map
    // JavConfigReader::GetAppletConfig(eastl::string const&) const
    undefined8 JavConfigReader::GetAppletConfig(basic_string* param_1) {
        undefined8 uVar2;
        undefined8 uVar3;
        undefined1 auVar4[16];
        undefined8 local_30;
        undefined8 local_28;

        uVar2 = eastl::list<console::Line, eastl::allocator>::begin();
        uVar3 = eastl::list<console::Line, eastl::allocator>::end();
        local_28 = eastl::find_if<eastl::ListIterator<AppletConfig, AppletConfig_const*, AppletConfig_const&>,
                                  (eastl::stringconst&)->GetAppletConfig() const ::__0>(uVar2, uVar3, param_1);
        auVar4 = eastl::list<console::Line, eastl::allocator>::end();
        local_30 = auVar4._0_8_;
        if (eastl::operator==((eastl*)&local_28, (hashtable_iterator_base*)&local_30, auVar4._8_8_)) {
            uVar2 = 0;
        } else {
            uVar2 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_28);
        }
        return uVar2;
    }

    // 0x1002b4430, 16 bytes, placed by class name and debug map
    // JavConfigReader::GetUniversalConfig() const
    undefined1* JavConfigReader::GetUniversalConfig() {
        return &field_40;
    }

    // 0x1002b4440, 16 bytes, placed by class name and debug map
    // JavConfigReader::GetLanguageMessages()
    undefined1* JavConfigReader::GetLanguageMessages() {
        return &field_272;
    }

    // 0x1002b4450, 16 bytes, placed by class name and debug map
    // JavConfigReader::GetUrl() const
    JavConfigReader* JavConfigReader::GetUrl() {
        return this;
    }

    // 0x1002b4460, 208 bytes, placed by class name and debug map
    // JavConfigReader::ParseParam(eastl::string const&, AppletConfig&)
    void JavConfigReader::ParseParam(basic_string* param_1, AppletConfig* param_2) {
        long lVar1;
        eastl::string* this_00;
        eastl::string local_68[32];
        eastl::string local_48[32];

        lVar1 = param_1->find("=", 0);
        if (lVar1 != -1) {
            eastl::string::substr((ulong)local_68, (ulong)param_1);
            eastl::string::trim(local_68);
            eastl::string::substr((ulong)local_48, (ulong)param_1);
            eastl::string::trim(local_48);
            this_00 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                      eastl::equal_to<eastl::string>, eastl::allocator, false>::
            operator[]((hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                 eastl::equal_to<eastl::string>, eastl::allocator, false>*)&param_2->field_88,
                       (basic_string*)local_68);
            eastl::string::operator=(this_00, (basic_string*)local_48);
            eastl::string::~basic_string(local_48);
            eastl::string::~basic_string(local_68);
        }
    }

    // 0x1002b4530, 560 bytes, placed by class name and debug map
    // JavConfigReader::ParseMsg(eastl::string const&, AppletConfig&)
    void JavConfigReader::ParseMsg(basic_string* param_1, AppletConfig* param_2) {
        long lVar1;
        ulong uVar2;
        ulong uVar3;
        char* pcVar4;
        char* pcVar5;
        int* piVar6;
        eastl::string* this_00;
        ulong uVar7;
        bool bVar8;
        eastl::string local_90[32];
        AppletConfig* local_70;
        JavConfigReader* local_68;
        eastl::string local_60[32];
        char* local_40;
        int local_34;

        local_70 = param_2;
        local_68 = this;
        lVar1 = param_1->find("=", 0);
        if (lVar1 == -1) {
            return;
        }
        eastl::string::substr((ulong)local_60, (ulong)param_1);
        eastl::string::trim(local_60);
        eastl::string::make_lower();
        eastl::string::substr((ulong)local_90, (ulong)param_1);
        eastl::string::trim(local_90);
        uVar7 = 0;
        do {
            uVar2 = local_90->find("\\\\", uVar7);
            uVar3 = local_90->find("\\n", uVar7);
            bVar8 = (uVar2 & uVar3) != 18446744073709551615;
            if (bVar8) {
                if ((uVar2 == 18446744073709551615) || ((uVar3 != 18446744073709551615 && (uVar3 < uVar2)))) {
                    eastl::string::replace(local_90, uVar3, 2, "\n");
                } else {
                    eastl::string::replace(local_90, uVar2, 2, "\\");
                    uVar3 = uVar2;
                }
                uVar7 = uVar3 + 1;
            }
        } while (bVar8);
        lVar1 = local_60->find("lang", 0);
        if (lVar1 == 0) {
            local_40 = (char*)eastl::string::operator[](local_60, 4);
            pcVar4 = (char*)eastl::string::operator[](local_60, 4);
            lVar1 = _strtol(pcVar4, &local_40, 0);
            pcVar4 = local_40;
            local_34 = (int)lVar1;
            if (((local_34 != 0) || (pcVar5 = (char*)eastl::string::operator[](local_60, 4), pcVar4 != pcVar5)) &&
                (piVar6 = ___error(), *piVar6 != 34)) {
                eastl::list<LanguageMessage, eastl::allocator>::emplace_back<int&, eastl::string&>(
                    (list<LanguageMessage, eastl::allocator>*)&local_68->field_272, &local_34, (basic_string*)local_90);
            }
        }
        this_00 = (eastl::string*)eastl::hash_map<
            eastl::string, eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator,
            false>::operator[]((hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                         eastl::equal_to<eastl::string>, eastl::allocator, false>*)&local_70->field_144,
                               (basic_string*)local_60);
        eastl::string::operator=(this_00, (basic_string*)local_90);
        eastl::string::~basic_string(local_90);
        eastl::string::~basic_string(local_60);
    }

    // 0x1002b47c0, 80 bytes, placed by class name and debug map
    // JavConfigReader::ParseOurConfig(ConfigParameter const&, AppletConfig&)
    void JavConfigReader::ParseOurConfig(ConfigParameter* param_1, AppletConfig* param_2) {
        basic_string* pbVar1;
        basic_string* pbVar2;
        eastl::string* this_00;

        pbVar1 = (basic_string*)param_1->Value();
        pbVar2 = (basic_string*)param_1->Name();
        this_00 = (eastl::string*)eastl::hash_map<
            eastl::string, eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator,
            false>::operator[]((hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                         eastl::equal_to<eastl::string>, eastl::allocator, false>*)&param_2->field_32,
                               pbVar2);
        eastl::string::operator=(this_00, pbVar1);
    }

} // namespace jag::oldscape
