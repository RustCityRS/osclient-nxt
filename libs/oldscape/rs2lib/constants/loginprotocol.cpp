// libs/oldscape/rs2lib/constants/loginprotocol.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    class LoginProtocol {
    public:
        LoginProtocol* ToString(int);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100264830, 2000 bytes, placed by class name and debug map
    // LoginProtocol::ToString(int)
    LoginProtocol* LoginProtocol::ToString(int param_1) {
        char* pcVar1;
        allocator local_20[8];

        switch (param_1) {
        case 0:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_SESSIONOK";
            break;
        case 1:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_SHOWADVERT";
            break;
        case 2:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_LOGINOK";
            break;
        case 3:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_BADCREDENTIALS";
            break;
        case 4:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_BANNED";
            break;
        case 5:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_DUPLICATE";
            break;
        case 6:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_OUTOFDATE_CLIENT_VERSION";
            break;
        case 7:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_SERVERFULL";
            break;
        case 8:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_LOGINSERVEROFFLINE";
            break;
        case 9:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_IPLIMIT";
            break;
        case 10:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_BADSESSION";
            break;
        case 11:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_FORCEPASSWORD";
            break;
        case 12:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_NEEDMEMBERS";
            break;
        case 13:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_BADSAVE";
            break;
        case 14:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_UPDATEINPROGRESS";
            break;
        case 15:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_RECONNECTOK";
            break;
        case 16:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_TOOMANYATTEMPTS";
            break;
        case 17:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_MOVETOFREE";
            break;
        case 18:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_LOCKED";
            break;
        case 19:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_BETAMODE";
            break;
        case 20:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_LOGINMISMATCH";
            break;
        case 21:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_HOPBLOCKED";
            break;
        case 22:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_BADLOGINPACKET";
            break;
        case 23:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_NOREPLYFROMSERVER";
            break;
        case 24:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_LOGINSERVERLOADERROR";
            break;
        case 25:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_UNKNOWNREPLYFROMLOGINSERVER";
            break;
        case 26:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_IPBLOCKED";
            break;
        case 27:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_COUNTRYBLOCKED";
            break;
        default:
            new (this) eastl::string();
            eastl::string::append_sprintf((char*)this, "LOGINRESULT_%i", param_1);
            return this;
        case 29:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_LOGINALLOWSCRIPT";
            break;
        case 31:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_FORCEDISPLAYNAME";
            break;
        case 32:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_NEGATIVECREDIT";
            break;
        case 37:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_PROFILEEDITOR";
            break;
        case 38:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_NOBETAACCESS";
            break;
        case 55:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_UNDER13";
            break;
        case 56:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_ENTER_PIN";
            break;
        case 57:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_ENTER_PIN_AGAIN";
            break;
        case 61:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_DOB_REQUIRED";
            break;
        case 62:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_SSO_TIMED_OUT";
            break;
        case 63:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_SSO_REVOKED";
            break;
        case 64:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_ONE_TIME_LOGIN_TOKEN_FOLLOW";
            break;
        case 65:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_ONE_TIME_LOGIN_TOKEN_CONNECTION_ERROR";
            break;
        case 66:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_ONE_TIME_LOGIN_TOKEN_ONLY_REQUEST_SUCCESSFUL";
            break;
        case 67:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_TOKEN_ONLY_REQUEST_FAILED";
            break;
        case 68:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_OUTOFDATE_JS5";
            break;
        case 69:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_PROOF_OF_WORK_TO_FOLLOW";
            break;
        case 71:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_DATE_OF_BIRTH_UPDATE_FAILED";
            break;
        case -5:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_TIMEOUT";
            break;
        case -4:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_IOERROR";
            break;
        case -3:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_INPROGRESS";
            break;
        case -2:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_NONE";
            break;
        case -1:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "LOGINRESULT_EOF";
        }
        new (this) eastl::string(pcVar1, local_20);
        return this;
    }

} // namespace jag::oldscape::constants
