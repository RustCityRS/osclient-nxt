// libs/oldscape/jagex3/javapal/JavConfigReader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "JavConfigReader.h"

namespace jag::oldscape {
    // 0x1002b2d30
    JavConfigReader::JavConfigReader(const eastl::string& str) : eastl::string(str) {

        field_32.unique_ptr<true, void>();
        eastl::string local_58("universal");
        new (&field_40) AppletConfig(local_58);
        new (&field_240) eastl::list<AppletConfig>();
        new (&field_272) eastl::list<LanguageMessage>();
    }

    // 0x1002b2e60
    unsigned long JavConfigReader::Process(int arg1) {
        int iVar3;
        uint64_t uVar5;
        HTTPRequest* unaff_RBX;
        unsigned long uVar6;
        uint32_t in_register_00000034;
        hash_map<eastl::string, eastl::string> local_60;

        HTTPRequest* pHVar4 = (HTTPRequest*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        uint8_t* httpRequest = &field_32;
        bool bVar1 = httpRequest == pHVar4;
        if (bVar1) {
            pHVar4 = (HTTPRequest*)operator new(664);
            new (pHVar4) http::HTTPRequest(0);
            httpRequest->reset(pHVar4);
            unaff_RBX = &local_60;
            new (unaff_RBX) eastl::hash_map(field_184);
            pHVar4 = unaff_RBX;
            HardcodedMessages::AddMessages(arg1, unaff_RBX);
        }
        if (empty() == '\0') {
            bVar1 = httpRequest == pHVar4;
            if (bVar1) {
                unaff_RBX = (HTTPRequest*)operator new(664);
                new (unaff_RBX) http::HTTPRequest(0);
                httpRequest->reset(unaff_RBX);
            }
            pHVar4 = (HTTPRequest*)(*httpRequest).operator->();
            iVar3 = pHVar4->GetState();
            if (iVar3 == 2) {
                unaff_RBX = (HTTPRequest*)logger::default_logger();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                unaff_RBX->Log(false, 2,
                               "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                               "javapal/JavConfigReader.cpp",
                               65, "Failed to fetch JavConfig from url: %s", uVar5);
            } else {
                if (iVar3 != 1) {
                    if (iVar3 == 0) {
                        pHVar4 = (HTTPRequest*)(*httpRequest).operator->();
                        pHVar4->Get(this);
                    }
                    uVar6 = 0;
                    goto LAB_1002b2faa;
                }
                ProcessData();
            }
            httpRequest->reset(nullptr);
            uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        } else {
            bVar1 = httpRequest != pHVar4;
            uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
            if (bVar1) {
                httpRequest->reset(nullptr);
            }
        }
    LAB_1002b2faa:
        return uVar6 & 4294967295;
    }

    // 0x1002b3030
    void HardcodedMessages::AddMessages(int arg1, eastl::hash_map<eastl::string, eastl::string> arg2) {
        eastl::string* pbVar1;
        eastl::string local_48;

        switch (arg1) {
        case 0:
            new (&local_48) eastl::string("err_missing_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Missing com.jagex.config setting");
            new (&local_48) eastl::string("err_invalid_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Invalid com.jagex.config setting");
            local_48 = eastl::string("loading_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Loading configuration");
            local_48 = eastl::string("err_load_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1,
                                  "There was an error loading the game configuration from the website.\nIf you have a "
                                  "firewall, check that this program is allowed to access the Internet.");
            local_48 = eastl::string("err_decode_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Error decoding configuration");
            local_48 = eastl::string("loaderbox_initial");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Loading...");
            local_48 = eastl::string("error");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Error");
            local_48 = eastl::string("quit");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Quit");
            local_48 = eastl::string("alreadyopen");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Please close your existing game before loading another one");
            break;
        case 1:
            new (&local_48) eastl::string("err_missing_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Einstellung com.jagex.config fehlt");
            new (&local_48) eastl::string("err_invalid_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Einstellung_com_jagex_config_ist_100db937d);
            local_48 = eastl::string("loading_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Lade Konfiguration");
            local_48 = eastl::string("err_load_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Beim_Laden_der_Spielkonfiguratio_100db93bb);
            local_48 = eastl::string("err_decode_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Fehler_beim_Entschl_sseln_der_Ko_100db943d);
            local_48 = eastl::string("loaderbox_initial");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Lade...");
            local_48 = eastl::string("error");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Fehler");
            local_48 = eastl::string("quit");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Beenden");
            local_48 = eastl::string("alreadyopen");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Bitte_schlie_e_dein_bestehendes_S_100db9481);
            break;
        case 2:
            new (&local_48) eastl::string("err_missing_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Param_tre_com_jagex_config_manqu_100db94c8);
            new (&local_48) eastl::string("err_invalid_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Param_tre_com_jagex_config_non_v_100db94ed);
            local_48 = eastl::string("loading_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Chargement de la configuration");
            local_48 = eastl::string("err_load_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Une_erreur_s_est_produite_lors_d_100db9533);
            local_48 = eastl::string("err_decode_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Erreur_de_d_codage_de_configurat_100db95e8);
            local_48 = eastl::string("loaderbox_initial");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Chargement...");
            local_48 = eastl::string("error");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Erreur");
            local_48 = eastl::string("quit");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Quitter");
            local_48 = eastl::string("alreadyopen");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Veuillez_fermer_votre_session_de_100db962a);
            break;
        case 3:
            new (&local_48) eastl::string("err_missing_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Faltando_configura_o_de_com_jage_100db967c);
            new (&local_48) eastl::string("err_invalid_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Configura_o_inv_lida_de_com_jage_100db96a8);
            local_48 = eastl::string("loading_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Carregando_configura_o_100db96d5);
            local_48 = eastl::string("err_load_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Houve_um_erro_quando_a_configura_100db96ef);
            local_48 = eastl::string("err_decode_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Erro_ao_decodificar_configura_o_100db978b);
            local_48 = eastl::string("loaderbox_initial");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Carregando...");
            local_48 = eastl::string("error");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Erro");
            local_48 = eastl::string("quit");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Fechar");
            local_48 = eastl::string("alreadyopen");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, s_Feche_a_sua_sess_o_de_jogo_atual_100db97c8);
            break;
        case 4:
            new (&local_48) eastl::string("err_missing_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Missing com.jagex.config setting");
            new (&local_48) eastl::string("err_invalid_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Invalid com.jagex.config setting");
            local_48 = eastl::string("loading_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Loading config");
            local_48 = eastl::string("err_load_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Error loading config");
            local_48 = eastl::string("err_decode_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Error decoding config");
            local_48 = eastl::string("loaderbox_initial");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Loading...");
            local_48 = eastl::string("error");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Error");
            local_48 = eastl::string("quit");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Quit");
            local_48 = eastl::string("alreadyopen");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Please close your existing game before loading another one");
            break;
        case 5:
            new (&local_48) eastl::string("err_missing_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Missing com.jagex.config setting");
            new (&local_48) eastl::string("err_invalid_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Invalid com.jagex.config setting");
            local_48 = eastl::string("loading_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Loading config");
            local_48 = eastl::string("err_load_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Error loading config");
            local_48 = eastl::string("err_decode_config");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Error decoding config");
            local_48 = eastl::string("loaderbox_initial");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Loading...");
            local_48 = eastl::string("error");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Error");
            local_48 = eastl::string("quit");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Quit");
            local_48 = eastl::string("alreadyopen");
            pbVar1 = (eastl::string*)(*arg2)[local_48];
            eastl::string::assign(pbVar1, "Cierra tu partida actual antes de abrir otra");
            break;
        default:
            goto switchD_1002b3059_default;
        }
    switchD_1002b3059_default:
    }

    // 0x1002b4120
    void JavConfigReader::ProcessData() {
        list<AppletConfig>* this_00;
        bool cVar1;
        int iVar2;
        JavConfigReader* pJVar4;
        eastl::string* pbVar5;
        AppletConfig local_1c8;
        uint8_t local_100[104];
        ReturnValue local_98;

        auto this_01 = field_32.operator->();
        auto arg1 = this_01->GetMSAASampleCount();
        Array<unsigned char> local_78(arg1);
        ConfigReader local_60(local_78);
        AppletConfig* pAVar3 = (AppletConfig*)&field_40;
        list<AppletConfig>* local_40 = (list<AppletConfig>*)&field_240;
        do {
            local_100->NextParameter();
            cVar1 = local_100->IsNull();
            if (!cVar1) {
                pJVar4 = (JavConfigReader*)local_100->Name();
                iVar2 = pJVar4->compare("param");
                if (iVar2 == 0) {
                    pJVar4 = (JavConfigReader*)local_100;
                    pbVar5 = local_100->Value();
                    iVar2 = 2;
                    ParseParam(pJVar4, pbVar5, pAVar3);
                } else {
                    iVar2 = pJVar4->compare("msg");
                    if (iVar2 == 0) {
                        pbVar5 = local_100->Value();
                        iVar2 = 2;
                        ParseMsg(*pbVar5, *pAVar3);
                    } else {
                        iVar2 = 2;
                        ParseOurConfig(pJVar4, (ConfigParameter*)local_100, pAVar3);
                    }
                }
            } else {
                local_98 = local_60.NextHeader();
                cVar1 = local_98.empty();
                iVar2 = 3;
                if (!cVar1) {
                    local_1c8 = AppletConfig(local_98);
                    pAVar3 = (AppletConfig*)local_1c8.SSOBeginPtr();
                    this_00 = local_40;
                    local_40->emplace_back<AppletConfig>(*pAVar3);
                    pAVar3 = (AppletConfig*)this_00->back();
                    iVar2 = 0;
                }
            }
        } while (iVar2 != 3);
    }

    // 0x1002b4330
    uint64_t JavConfigReader::GetAppletConfig(const eastl::string& str) const {
        ListIterator<AppletConfig, AppletConfig const*, AppletConfig const&>* listIterator1;
        ListIterator<AppletConfig, AppletConfig const*, AppletConfig const&>* listIterator2;
        uint64_t uVar2;

        uint8_t* this_00 = &field_240;
        listIterator1 = (ListIterator<AppletConfig, AppletConfig const*, AppletConfig const&>*)this_00->begin();
        listIterator2 = (ListIterator<AppletConfig, AppletConfig const*, AppletConfig const&>*)this_00->end();
        uint64_t local_28 = eastl::find_if<eastl::ListIterator<AppletConfig, AppletConfig const*, AppletConfig const&>,
                                           (eastl::stringconst&)->GetAppletConfig() const ::__0>(
            listIterator1, listIterator2, (__0*)str);
        uint64_t local_30 = this_00->end();
        if (local_28 == local_30 == '\0') {
            uVar2 = *local_28;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1002b4430
    uint8_t* JavConfigReader::GetUniversalConfig() const {
        return &field_40;
    }

    // 0x1002b4440
    uint8_t* JavConfigReader::GetLanguageMessages() {
        return &field_272;
    }

    // 0x1002b4450
    eastl::string* JavConfigReader::GetUrl() const {
        return (eastl::string*)this;
    }

    // 0x1002b4460
    void JavConfigReader::ParseParam(const eastl::string& str, AppletConfig& appletConfig) {
        eastl::string* this_00;
        ReturnValue local_68;
        ReturnValue local_48;

        unsigned long arg2 = str.find("=", 0);
        if (arg2 != 18446744073709551615) {
            local_68 = str.substr(0, arg2);
            local_68.trim();
            local_48 = str.substr(arg2 + 1, 18446744073709551615);
            local_48.trim();
            this_00 = &appletConfig.field_88[local_68];
            *this_00 = &local_48;
        }
    }

    // 0x1002b4530
    void JavConfigReader::ParseMsg(const eastl::string& str, AppletConfig& appletConfig) {
        unsigned long arg1;
        unsigned long arg1_00;
        char* pcVar3;
        char* pcVar4;
        int* piVar5;
        bool bVar6;
        char* local_40;
        int local_34;

        unsigned long uVar1 = str.find("=", 0);
        if (uVar1 == 18446744073709551615) {
            return;
        }
        auto local_60 = str.substr(0, uVar1);
        local_60.trim();
        local_60.make_lower();
        auto local_90 = str.substr(uVar1 + 1, 18446744073709551615);
        local_90.trim();
        uVar1 = 0;
        do {
            arg1 = local_90.find("\\\\", uVar1);
            arg1_00 = local_90.find("\\n", uVar1);
            bVar6 = (arg1 & arg1_00) != 18446744073709551615;
            if (bVar6) {
                if ((arg1 == 18446744073709551615) || ((arg1_00 != 18446744073709551615 && (arg1_00 < arg1)))) {
                    local_90.replace(arg1_00, 2, "\n");
                } else {
                    local_90.replace(arg1, 2, "\\");
                    arg1_00 = arg1;
                }
                uVar1 = arg1_00 + 1;
            }
        } while (bVar6);
        long lVar2 = local_60.find("lang", 0);
        if (lVar2 == 0) {
            local_40 = &local_60[4];
            pcVar3 = &local_60[4];
            lVar2 = _strtol(pcVar3, &local_40, 0);
            pcVar3 = local_40;
            local_34 = (int)lVar2;
            if (((local_34 != 0) || (pcVar4 = (char*)local_60[4], pcVar3 != pcVar4)) &&
                (piVar5 = ___error(), *piVar5 != 34)) {
                field_272.emplace_back<int&, eastl::string&>(local_34, local_90);
            }
        }
        eastl::string* this_00 = &appletConfig->field_144[local_60];
        *this_00 = &local_90;
    }

    // 0x1002b47c0
    void JavConfigReader::ParseOurConfig(const ConfigParameter& configParameter, AppletConfig& appletConfig) {
        auto str = configParameter.Value();
        auto str_00 = configParameter.Name();
        eastl::string* this_00 = &appletConfig.field_32[*str_00];
        *this_00 = str;
    }

} // namespace jag::oldscape
