// libs/oldscape/rs2lib/constants/loginprotocol.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    class LoginProtocol {
    public:
        auto ToString(int arg1);
    };

    // 0x100264830
    auto LoginProtocol::ToString(int arg1) {
        char* str;

        switch (arg1) {
        case 0:
            str = "LOGINRESULT_SESSIONOK";
            break;
        case 1:
            str = "LOGINRESULT_SHOWADVERT";
            break;
        case 2:
            str = "LOGINRESULT_LOGINOK";
            break;
        case 3:
            str = "LOGINRESULT_BADCREDENTIALS";
            break;
        case 4:
            str = "LOGINRESULT_BANNED";
            break;
        case 5:
            str = "LOGINRESULT_DUPLICATE";
            break;
        case 6:
            str = "LOGINRESULT_OUTOFDATE_CLIENT_VERSION";
            break;
        case 7:
            str = "LOGINRESULT_SERVERFULL";
            break;
        case 8:
            str = "LOGINRESULT_LOGINSERVEROFFLINE";
            break;
        case 9:
            str = "LOGINRESULT_IPLIMIT";
            break;
        case 10:
            str = "LOGINRESULT_BADSESSION";
            break;
        case 11:
            str = "LOGINRESULT_FORCEPASSWORD";
            break;
        case 12:
            str = "LOGINRESULT_NEEDMEMBERS";
            break;
        case 13:
            str = "LOGINRESULT_BADSAVE";
            break;
        case 14:
            str = "LOGINRESULT_UPDATEINPROGRESS";
            break;
        case 15:
            str = "LOGINRESULT_RECONNECTOK";
            break;
        case 16:
            str = "LOGINRESULT_TOOMANYATTEMPTS";
            break;
        case 17:
            str = "LOGINRESULT_MOVETOFREE";
            break;
        case 18:
            str = "LOGINRESULT_LOCKED";
            break;
        case 19:
            str = "LOGINRESULT_BETAMODE";
            break;
        case 20:
            str = "LOGINRESULT_LOGINMISMATCH";
            break;
        case 21:
            str = "LOGINRESULT_HOPBLOCKED";
            break;
        case 22:
            str = "LOGINRESULT_BADLOGINPACKET";
            break;
        case 23:
            str = "LOGINRESULT_NOREPLYFROMSERVER";
            break;
        case 24:
            str = "LOGINRESULT_LOGINSERVERLOADERROR";
            break;
        case 25:
            str = "LOGINRESULT_UNKNOWNREPLYFROMLOGINSERVER";
            break;
        case 26:
            str = "LOGINRESULT_IPBLOCKED";
            break;
        case 27:
            str = "LOGINRESULT_COUNTRYBLOCKED";
            break;
        default:
            auto result;
            result.append_sprintf("LOGINRESULT_%i", arg1);
            return result;
        case 29:
            str = "LOGINRESULT_LOGINALLOWSCRIPT";
            break;
        case 31:
            str = "LOGINRESULT_FORCEDISPLAYNAME";
            break;
        case 32:
            str = "LOGINRESULT_NEGATIVECREDIT";
            break;
        case 37:
            str = "LOGINRESULT_PROFILEEDITOR";
            break;
        case 38:
            str = "LOGINRESULT_NOBETAACCESS";
            break;
        case 55:
            str = "LOGINRESULT_UNDER13";
            break;
        case 56:
            str = "LOGINRESULT_ENTER_PIN";
            break;
        case 57:
            str = "LOGINRESULT_ENTER_PIN_AGAIN";
            break;
        case 61:
            str = "LOGINRESULT_DOB_REQUIRED";
            break;
        case 62:
            str = "LOGINRESULT_SSO_TIMED_OUT";
            break;
        case 63:
            str = "LOGINRESULT_SSO_REVOKED";
            break;
        case 64:
            str = "LOGINRESULT_ONE_TIME_LOGIN_TOKEN_FOLLOW";
            break;
        case 65:
            str = "LOGINRESULT_ONE_TIME_LOGIN_TOKEN_CONNECTION_ERROR";
            break;
        case 66:
            str = "LOGINRESULT_ONE_TIME_LOGIN_TOKEN_ONLY_REQUEST_SUCCESSFUL";
            break;
        case 67:
            str = "LOGINRESULT_TOKEN_ONLY_REQUEST_FAILED";
            break;
        case 68:
            str = "LOGINRESULT_OUTOFDATE_JS5";
            break;
        case 69:
            str = "LOGINRESULT_PROOF_OF_WORK_TO_FOLLOW";
            break;
        case 71:
            str = "LOGINRESULT_DATE_OF_BIRTH_UPDATE_FAILED";
            break;
        case -5:
            str = "LOGINRESULT_TIMEOUT";
            break;
        case -4:
            str = "LOGINRESULT_IOERROR";
            break;
        case -3:
            str = "LOGINRESULT_INPROGRESS";
            break;
        case -2:
            str = "LOGINRESULT_NONE";
            break;
        case -1:
            str = "LOGINRESULT_EOF";
        }
        new (&result) eastl::string(str);
        return result;
    }

} // namespace jag::oldscape::constants
