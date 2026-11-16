// libs/hal/http/CRMData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.http

#include "CRMData.h"

namespace jag::http {
    // 0x100f460d0
    float CRMData::m_debugSpamEndpointRequests[4] = {0, 0, 0, 0};

    // 0x100009e70: CRMData::ClientDataProvider::~ClientDataProvider() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000b9960: CRMData::GetCRMRequestState() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1001319d0: CRMData::LabelElement::~LabelElement() has the same machine code as oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp()

    // 0x100ad73a0
    uint32_t CRMData::Request(std::basic_string_view<char> str, CRMData::ClientDataProvider* clientDataProvider) {
        Logger* pLVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        long* in_RCX;
        int arg4;
        char* str2;

        ClientDataProvider* local_38 = clientDataProvider;
        bool cVar1 = (str).empty();
        if (!cVar1) {
            if (in_RCX == nullptr) {
                pLVar3 = logger::default_logger();
                str2 = "Cannot request CRM data - no client data provider specified";
                arg4 = 17;
            } else {
                cVar1 = (**(void (**)(...))(*in_RCX + 16))();
                if ((cVar1) && (cVar1 = field_8.empty(), !cVar1)) {
                    field_40 = in_RCX;
                    cVar1 = (&field_48)->operator_cast_to_bool();
                    if (cVar1) {
                        pLVar3 = logger::default_logger();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar5 = ((EditLine*)field_48.operator->())->GetText();
                        pLVar3->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/"
                                    "CRMData.cpp",
                                    31,
                                    "Making a CRM data request to endpoint \'%s\' however there\'s already a pending "
                                    "request to \'%s\'",
                                    uVar4, uVar5);
                    }
                    if (m_cRMRequestState == 1) {
                        pLVar3 = logger::default_logger();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar3->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/"
                                    "CRMData.cpp",
                                    32,
                                    "Making a CRM data request to endpoint \'%s\' but there are pending image requests",
                                    uVar4);
                    }
                    return RefreshRequest();
                }
                pLVar3 = logger::default_logger();
                str2 = "Cannot request CRM data - could not get the endpoint URL";
                arg4 = 23;
            }
        } else {
            pLVar3 = logger::default_logger();
            str2 = "Cannot request CRM data - no base endpoint URL specified";
            arg4 = 11;
        }
        pLVar3->Log(false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp", arg4,
                    str2);
        return 0;
    }

    // 0x100ad7590
    uint64_t CRMData::RefreshRequest() {
        uint8_t* this_01;
        HTTPRequest* pHVar2;
        unique_ptr<HTTPRequest>* this_02;
        uint64_t uVar3;
        long lVar4;
        ReturnValue local_38;

        uint8_t* this_00 = &field_8;
        if ((this_00->empty() == '\0') && (field_40 != nullptr)) {
            local_38 = std::make_unique<HTTPRequest>();
            field_48 = &local_38;
            pHVar2 = (HTTPRequest*)field_48.operator->();
            pHVar2->Get(this_00);
            if (*PTR_m_debugSpamEndpointRequests_100ee6668 != '\0') {
                this_01 = &field_304;
                lVar4 = 100;
                this_01->reserve(100);
                do {
                    local_38 = std::make_unique<HTTPRequest>();
                    std::vector<std::unique_ptr<HTTPRequest>>::emplace_back<std::unique_ptr<HTTPRequest>>(
                        (vector<std::unique_ptr<HTTPRequest>>*)this_01,
                        (unique_ptr<HTTPRequest, std::default_delete<HTTPRequest> _>*)&local_38);
                    this_02 = (unique_ptr<HTTPRequest>*)this_01->back();
                    pHVar2 = (HTTPRequest*)(*this_02).operator->();
                    pHVar2->Get(this_00);
                    lVar4 = lVar4 - 1;
                } while (lVar4 != 0);
            }
            ResetData();
            uVar3 = 1;
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100ad7830
    void CRMData::ResetData() {
        m_cRMRequestState = 0;
        field_112.clear();
        field_136.clear();
        field_168 = 0;
        field_176 = 4575657222473777152;
        field_184.clear();
        field_216.clear();
        field_248.clear();
    }

    // 0x100ad7950
    unkbyte9 CRMData::GetMetadataValue(const eastl::basic_string<char, BucketAllocatorEASTL>& str) const {
        long lVar2;
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        obj_iterator* obj_iterator;
        unkbyte9 local_30;

        uint64_t local_20 = field_248.find(str);
        uint64_t local_18 = (((uint64_t)extraout_var << 8) | (uint8_t)extraout_DL);
        uint64_t local_40 = field_248.end();
        uint64_t local_38 = (((uint64_t)extraout_var_00 << 8) | (uint8_t)extraout_DL_00);
        obj_iterator = (obj_iterator*)&local_40;
        if (local_20 != *obj_iterator == '\0') {
            local_30 = std::optional<
                std::reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>>(
                (nullopt_t)obj_iterator);
        } else {
            lVar2 = local_20.HeapBeginPtr();
            local_30.optional<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const&, 0>(
                *((lVar2 + 24)));
        }
        return local_30;
    }

    // 0x100ad7a80
    void CRMData::ServiceRequests() {
        uint8_t* puVar1;
        bool bVar3;
        int iVar4;
        HTTPRequest* pHVar5;
        RT7Core* pRVar6;
        Array<graphics::Joint>* joints;
        unique_ptr<HTTPRequest>* puVar7;
        unique_ptr<HTTPRequest>* puVar8;
        CharReader* charReader;
        long* plVar9;
        uint64_t uVar10;
        long lVar11;
        Logger* pLVar12;
        void* in_RSI;
        bool bVar13;
        WrapArray<unsigned char const> local_98;
        CharReaderBuilder local_88;
        string local_58;
        unique_ptr<Json::CharReader> local_38;

        if (m_cRMRequestState == 1) {
            bVar3 = &field_48 == in_RSI;
            if (!bVar3) {
                LogAssert("m_activeEndpointRequest == nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp",
                          136, nullptr);
            }
            puVar1 = &field_184;
            puVar7 = (unique_ptr<HTTPRequest>*)puVar1->HeapBeginPtr();
            puVar8 = (unique_ptr<HTTPRequest>*)puVar1->end();
            if (puVar7 != puVar8) {
                bVar3 = true;
                do {
                    pHVar5 = (HTTPRequest*)(*puVar7).operator->();
                    if (!(pHVar5->IsRequestComplete())) {
                        bVar3 = false;
                    }
                    puVar7 = puVar7 + 24;
                } while (puVar7 != puVar8);
                if (!bVar3) {
                    return;
                }
            }
            puVar7 = (unique_ptr<HTTPRequest>*)puVar1->HeapBeginPtr();
            puVar8 = (unique_ptr<HTTPRequest>*)puVar1->end();
            if (puVar7 == puVar8) {
                bVar3 = false;
            } else {
                bVar13 = false;
                do {
                    pHVar5 = (HTTPRequest*)(*puVar7).operator->();
                    iVar4 = pHVar5->GetState();
                    bVar3 = true;
                    if (iVar4 != 1) {
                        pLVar12 = logger::default_logger();
                        uVar10 = ((EditLine*)(*puVar7).operator->())->GetText();
                        pLVar12->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/"
                                     "CRMData.cpp",
                                     159, "Could not retrieve image data from \'%s\'", uVar10);
                        bVar3 = bVar13;
                    }
                    puVar7 = puVar7 + 24;
                    bVar13 = bVar3;
                } while (puVar7 != puVar8);
            }
            m_cRMRequestState = (unsigned int)!bVar3 * 2 + 2;
            return;
        }
        if (m_cRMRequestState != 0) {
            return;
        }
        puVar1 = &field_48;
        pHVar5 = (HTTPRequest*)(*puVar1).operator->();
        iVar4 = pHVar5->GetState();
        if (iVar4 == 2) {
            m_cRMRequestState = 3;
        } else {
            if (iVar4 != 1) {
                return;
            }
            if ((&field_64)->operator_cast_to_bool()) {
                pRVar6 = (RT7Core*)(*puVar1).operator->();
                joints = (Array<graphics::Joint>*)pRVar6->GetMSAASampleCount();
                local_98.WrapArray<Array<unsigned char>>(*joints);
                if (std::function<bool(WrapArray<unsigned char const>)>::operator()(
                        (function<bool(WrapArray<unsigned char const>)>*)&field_64, &local_98)) {
                    m_cRMRequestState = 2;
                    goto LAB_100ad7d75;
                }
            }
            local_88 = Json::CharReaderBuilder();
            charReader = local_88.newCharReader();
            local_38.unique_ptr<true, void>(charReader);
            local_88 = Json::Value(0);
            local_58 = std::string();
            plVar9 = (long*)local_38.operator->();
            pRVar6 = (RT7Core*)(*puVar1).operator->();
            uVar10 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pRVar6->GetMSAASampleCount())->data();
            pRVar6 = (RT7Core*)(*puVar1).operator->();
            lVar11 = ((Array<unsigned char>*)pRVar6->GetMSAASampleCount())->back();
            if (!((**(void (**)(...))(*plVar9 + 16))(plVar9, uVar10, lVar11 + 1, &local_88, &local_58))) {
                m_cRMRequestState = 5;
                pLVar12 = logger::default_logger();
                uVar10 = std::string::c_str(&local_58);
                pLVar12->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp", 119,
                    "An error occurred while parsing the CRM endpoint reply - \'%s\'", uVar10);
            } else {
                m_cRMRequestState = 2;
            }
            ExtractDataFromJSON(local_88);
            std::string::~string(&local_58);
        }
    LAB_100ad7d75:
        puVar1->reset(nullptr);
    }

    // 0x100ad7e50
    void CRMData::ExtractDataFromJSON(const Json::Value& value) {
        Value* pVVar3;
        Logger* this_00;
        int arg4;
        char* str2;

        Value* pVVar2 = &value["message"];
        if (!(pVVar2->isObject())) {
            m_cRMRequestState = 5;
            this_00 = logger::default_logger();
            str2 = "Invalid \'message\' element received in CRM endpoint reply";
            arg4 = 197;
        } else {
            m_cRMRequestState = 2;
            pVVar3 = (Value*)(*pVVar2)["images"];
            ExtractImageInfo(*pVVar3);
            pVVar3 = (Value*)(*pVVar2)["labels"];
            ExtractTextInfo(*pVVar3);
            pVVar3 = (Value*)(*pVVar2)["behaviour"];
            ExtractBehaviour(*pVVar3);
            pVVar2 = (Value*)(*pVVar2)["meta"];
            ExtractMetadata(*pVVar2);
            if (!(field_112.empty())) {
                return;
            }
            m_cRMRequestState = 5;
            this_00 = logger::default_logger();
            str2 = "No endpoint URL received as part of the CRM behaviour";
            arg4 = 191;
        }
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp", arg4,
                     str2);
    }

    // 0x100ad7fd0
    void CRMData::ExtractImageInfo(const Json::Value& value) {
        Value* this_00;
        char* str;
        ImageElement* pIVar2;
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;
        eastl::string local_a0;
        Value local_80;
        uint64_t local_60;
        uint8_t local_58;
        uint64_t local_48;
        uint8_t local_40;
        vector<CRMData::ImageElement>* local_38;

        bool cVar1 = value.isNull();
        if (!cVar1) {
            local_48 = value.begin();
            local_40 = extraout_DL;
            local_60 = value.end();
            local_38 = (vector<CRMData::ImageElement>*)&field_184;
            local_58 = extraout_DL_00;
            cVar1 = local_48 != local_60;
            if (cVar1) {
                do {
                    this_00 = (Value*)*local_48;
                    cVar1 = ((Value*)(*this_00)["src"])->isString();
                    if (cVar1) {
                        Json::Value::asString(&local_80);
                        str = (char*)std::string::c_str(&local_80);
                        local_a0 = eastl::string(str);
                        pIVar2 = local_38->emplace_back<eastl::string>(local_a0);
                        std::string::~string(&local_80);
                        ExtractBounds(this_00, (array<float, _4ul>*)&pIVar2->field_8, "placement");
                    }
                    ++local_48;
                    cVar1 = local_48 != local_60;
                } while (cVar1);
            }
            cVar1 = local_38->empty();
            if (!cVar1) {
                m_cRMRequestState = 1;
            }
        }
    }

    // 0x100ad8170
    void CRMData::ExtractTextInfo(const Json::Value& value) {
        uint32_t uVar3;
        Logger* this_00;
        uint64_t uVar4;
        Value* this_01;
        Value* pVVar5;
        char* str;
        LabelElement* pLVar6;
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;
        basic_string<char, BucketAllocatorEASTL> local_98;
        Value local_80;
        uint8_t* local_68;
        vector<CRMData::LabelElement>* local_60;
        uint64_t local_58;
        uint8_t local_50;
        uint64_t local_48;
        uint8_t local_40;
        eastl local_38;

        bool cVar1 = value.isNull();
        if (!cVar1) {
            local_58 = value.begin();
            local_50 = extraout_DL;
            local_48 = value.end();
            local_40 = extraout_DL_00;
            cVar1 = local_58 != local_48;
            if (cVar1) {
                local_68 = &field_8;
                local_60 = (vector<CRMData::LabelElement>*)&field_216;
                do {
                    this_01 = (Value*)*local_58;
                    pVVar5 = (Value*)(*this_01)["text"];
                    cVar1 = pVVar5->isString();
                    if (!cVar1) {
                        this_00 = logger::default_logger();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this_00->Log(false, 3,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/"
                                     "CRMData.cpp",
                                     257, "Endpoint response for \'%s\' includes an invalid label entry", uVar4);
                    } else {
                        Json::Value::asString(&local_80);
                        str = (char*)std::string::c_str(&local_80);
                        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
                        local_98 = eastl::basic_string<char, BucketAllocatorEASTL>(str, &local_38);
                        pLVar6 = local_60->emplace_back<eastl::basic_string<char, BucketAllocatorEASTL>>(local_98);
                        std::string::~string(&local_80);
                        (*this_01)["align_x"];
                        Json::Value::asString(&local_98);
                        uVar3 = LabelElement::GetAlign(local_98);
                        *(uint32_t*)&pLVar6->field_40 = uVar3;
                        std::string::~string(&local_98);
                        (*this_01)["align_y"];
                        Json::Value::asString(&local_98);
                        uVar3 = LabelElement::GetAlign(local_98);
                        *(uint32_t*)((long)&pLVar6->field_40 + 4) = uVar3;
                        std::string::~string(&local_98);
                        pVVar5 = (Value*)(*this_01)["font"];
                        pLVar6->field_48 = pVVar5->asInt();
                        ExtractBounds(this_01, (array<float, _4ul>*)&pLVar6->field_24, "placement");
                    }
                    ++local_58;
                    cVar1 = local_58 != local_48;
                } while (cVar1);
            }
        }
    }

    // 0x100ad83a0
    void CRMData::ExtractBehaviour(const Json::Value& value) {
        bool bVar2;
        int iVar3;
        basic_string<char, std::char_traits<char>, std::allocator<char> _>* str;
        Value* this_00;
        char* pcVar4;
        Logger* pLVar5;
        uint64_t uVar6;
        string* this_01;
        ReturnValue local_c8;
        int local_b0[6];
        uint8_t local_98[56];
        basic_string<char, BucketAllocatorEASTL>* local_60;
        uint64_t local_58;
        uint64_t local_50;
        char* local_48;
        vector<CRMData::ActionInfo::PayloadEntry>* local_40;
        eastl local_38;

        if (!(value.isNull())) {
            ExtractBounds(value, (array<float, _4ul>*)&field_168, "clickbounds");
            local_c8 = value.getMemberNames();
            local_58 = std::vector<std::string>::begin(&local_c8);
            local_50 = std::vector<std::string>::end(&local_c8);
            bVar2 = &local_58 != &local_50;
            if (bVar2) {
                local_60 = (basic_string<char, BucketAllocatorEASTL>*)&field_112;
                local_40 = (vector<CRMData::ActionInfo::PayloadEntry>*)&field_136;
                do {
                    str = (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)local_58.operator*();
                    this_00 = &value[str];
                    iVar3 = std::string::compare((char*)str);
                    if (iVar3 == 0) {
                        if (!(this_00->isString())) {
                            pLVar5 = logger::default_logger();
                            pLVar5->Log(false, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "http/CRMData.cpp",
                                        284, "Received a non-string value for the target endpoint");
                        } else {
                            this_01 = (string*)local_98;
                            this_01->asString();
                            pcVar4 = (char*)std::string::c_str(this_01);
                            *local_60 = pcVar4;
                        LAB_100ad843e:
                            std::string::~string(this_01);
                        }
                    } else {
                        iVar3 = std::string::compare((char*)str);
                        if (iVar3 != 0) {
                            if (!(this_00->isInt())) {
                                if (!(this_00->isBool())) {
                                    if (this_00->isString()) {
                                        pcVar4 = (char*)str->c_str();
                                        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
                                        new (local_98)
                                            eastl::basic_string<char, BucketAllocatorEASTL>(pcVar4, &local_38);
                                        local_b0->asString();
                                        local_48 = (char*)local_b0->c_str();
                                        ((local_98 + 24))
                                            ->variant<char const*, 0, 0, 0,
                                                      eastl::basic_string<char, BucketAllocatorEASTL>, 0ul, 0>(
                                                local_48);
                                        local_40->push_back(*local_98);
                                        this_01 = (string*)local_b0;
                                        goto LAB_100ad843e;
                                    }
                                    pLVar5 = logger::default_logger();
                                    uVar6 = str->c_str();
                                    pLVar5->Log(false, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/http/CRMData.cpp",
                                                300, "Invalid metadata type received for key \'%s\' - ignoring", uVar6);
                                    goto LAB_100ad8443;
                                }
                            }
                            pcVar4 = (char*)str->c_str();
                            local_48.destruct<oldscape::highlight::NpcUID*>();
                            new (local_98) eastl::basic_string<char, BucketAllocatorEASTL>(pcVar4, &local_48);
                            local_b0[0] = this_00->asInt();
                            ((local_98 + 24))->variant<int, 0, 0, 0, int, 1ul, 0>(*local_b0);
                            local_40->push_back(*local_98);
                        }
                    }
                LAB_100ad8443:
                    local_58.operator++();
                    bVar2 = &local_58 != &local_50;
                } while (bVar2);
            }
            std::vector<std::string>::~vector(&local_c8);
        }
    }

    // 0x100ad8720
    void CRMData::ExtractMetadata(const Json::Value& value) {
        bool bVar2;
        uint32_t uVar3;
        basic_string<char, std::char_traits<char>, std::allocator<char> _>* str;
        Value* this_00;
        Logger* this_01;
        uint64_t uVar4;
        pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
             std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>
            local_f8;
        ReturnValue local_c0;
        ReturnValue local_a8;
        ReturnValue local_90;
        variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> local_78;
        char* local_58;
        uint64_t local_50;
        uint64_t local_48;
        char* local_40;

        CRMData* local_38 = this;
        bool cVar1 = value.isNull();
        if (!cVar1) {
            local_c0 = value.getMemberNames();
            local_50 = std::vector<std::string>::begin(&local_c0);
            local_48 = std::vector<std::string>::end(&local_c0);
            bVar2 = &local_50 != &local_48;
            if (bVar2) {
                local_38 = (CRMData*)&local_38->field_248;
                do {
                    str = (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)local_50.operator*();
                    this_00 = &value[str];
                    cVar1 = this_00->isInt();
                    if (!cVar1) {
                        cVar1 = this_00->isBool();
                        if (cVar1)
                            goto LAB_100ad8813;
                        cVar1 = this_00->isString();
                        if (!cVar1) {
                            this_01 = logger::default_logger();
                            uVar4 = str->c_str();
                            this_01->Log(false, 3,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "http/CRMData.cpp",
                                         327, "Invalid metadata type received for key \'%s\' - ignoring", uVar4);
                        } else {
                            local_40 = (char*)str->c_str();
                            Json::Value::asString(&local_90);
                            local_58 = (char*)std::string::c_str(&local_90);
                            local_78
                                .variant<char const*, 0, 0, 0, eastl::basic_string<char, BucketAllocatorEASTL>, 0ul, 0>(
                                    local_58);
                            eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                        std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>::
                                pair<char const*, std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>,
                                     void>(&local_f8, &local_40,
                                           (variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>*)&local_78);
                            local_a8 = local_38->insert(local_f8);
                            std::string::~string(&local_90);
                        }
                    } else {
                    LAB_100ad8813:
                        local_a8[0] = (ReturnValue)str->c_str();
                        uVar3 = this_00->asInt();
                        local_40 = (char*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar3);
                        local_78.variant<int, 0, 0, 0, int, 1ul, 0>(local_40);
                        eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                    std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>>::
                            pair<char const*, std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>, void>(
                                &local_f8, (char**)&local_a8, &local_78);
                        local_90 = local_38->insert(local_f8);
                    }
                    local_50.operator++();
                    bVar2 = &local_50 != &local_48;
                } while (bVar2);
            }
            std::vector<std::string>::~vector(&local_c0);
        }
    }

    // 0x100ad89c0
    void CRMData::ClearImageDataRequests() {
        if (m_cRMRequestState < 2) {
            LogAssert("(int)m_state >= (int)CRMRequestState::ENDPOINT_REPLY_RECEIVED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/CRMData.cpp", 203,
                      nullptr);
        }
        auto this_00 = field_184.HeapBeginPtr();
        auto puVar1 = field_184.end();
        for (; this_00 != puVar1; this_00 = this_00 + 24) {
            this_00->reset(nullptr);
        }
    }

    // 0x100ad8ac0
    void CRMData::ExtractBounds(const Json::Value& value, std::array<float, 4ul>& arg2, const char* str) {
        Value value;
        Value* this_00;
        Value* this_01;
        uint32_t uVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        uint32_t uVar6;

        Value* pVVar2 = &value[str];
        if (pVVar2->isArray()) {
            value = (Value*)(*pVVar2)[0];
            this_00 = (Value*)(*pVVar2)[1];
            this_01 = (Value*)(*pVVar2)[2];
            pVVar2 = (Value*)(*pVVar2)[3];
            if (value.isDouble()) {
                if (this_00->isDouble()) {
                    if (this_01->isDouble()) {
                        if (pVVar2->isDouble()) {
                            uVar3 = value.asFloat();
                            uVar4 = this_00->asFloat();
                            uVar5 = this_01->asFloat();
                            uVar6 = pVVar2->asFloat();
                            *(uint32_t*)arg2 = uVar3;
                            *(uint32_t*)(arg2 + 4) = uVar4;
                            *(uint32_t*)(arg2 + 8) = uVar5;
                            *(uint32_t*)(arg2 + 12) = uVar6;
                        }
                    }
                }
            }
        }
    }

    // 0x100ad8c50
    char CRMData::LabelElement::GetAlign(const std::string& str) {
        char cVar1;

        int iVar2 = std::string::compare((char*)str);
        if (iVar2 == 0) {
            cVar1 = '\x01';
        } else {
            iVar2 = std::string::compare((char*)str);
            if (iVar2 == 0) {
                cVar1 = '\x02';
            } else {
                iVar2 = std::string::compare((char*)str);
                cVar1 = (iVar2 == 0) * '\x02';
            }
        }
        return cVar1;
    }

    // 0x100ad8df0
    unsigned long CRMData::SetFromJSON(const eastl::string& str) {
        unique_ptr<Json::CharReader> local_38;

        ResetData();
        field_48.reset(nullptr);
        CharReaderBuilder local_80;
        auto charReader = local_80.newCharReader();
        local_38.unique_ptr<true, void>(charReader);
        local_80 = Json::Value(0);
        string local_50;
        auto plVar3 = local_38.operator->();
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar6 = str.size();
        if ((**(void (**)(...))(*plVar3 + 16))(plVar3, uVar4, lVar5 + lVar6, &local_80, &local_50) == '\0') {
            m_cRMRequestState = 5;
        } else {
            ExtractDataFromJSON(local_80);
        }
        int iVar1 = m_cRMRequestState;
        std::string::~string(&local_50);
        return iVar1 != 5 & 4294967295;
    }

} // namespace jag::http
