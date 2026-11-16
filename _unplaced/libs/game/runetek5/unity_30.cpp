// _unplaced/libs/game/runetek5/unity_30.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    // 0x100f395d8
    int32_t LocalisedText::DEBUG_CONSOLE_INFO[14] = {
        "This is the developer console. To close, press the ALT-`, ALT-² or ALT-§ keys on your keyboard.",
        "Das ist die Entwicklerkonsole. Zum Schließen, die Tasten ALT+`, ALT+² oder ALT+§ drücken.",
        "Ceci est la console de développement. Pour la fermer, appuyez sur les touches ALT+`, ALT+² ou ALT+§.",
        "Este é o painel de controle do desenvolvedor. Para fechar, pressione ALT-`, ALT-² ou ALT-§.",
        "",
        "",
        "Esta es la consola de desarrolador. Para cerrarla, pulsa las teclas ALT-`, ALT-² or ALT-§ en tu teclado.",
    };

    // 0x100f39610
    int32_t LocalisedText::DEBUG_CONSOLE_OPEN[14] = {
        "The developer console can be accessed with ALT-`, ALT-§ or ALT-².",
        "Die Entwicklerkonsole kann mit ALT+`, ALT+§ oder ALT+² aktiviert werden.",
        "La console de développement est accessible grâce aux touches ALT+`, ALT+§ ou ALT+².",
        "O painel de controle do desenvolvedor pode ser acessado com ALT-`, ALT-§ ou ALT-².",
        "",
        "",
        "Puedes acceder a la consola de desarrollador con ALT-`, ALT-§ o ALT-².",
    };

    // 0x100f39648
    const void* LocalisedText::DEBUG_CONSOLE_ERROR[7] = {
        "There was an error executing the command.",
        "Es gab einen Fehler beim Ausführen des Befehls.",
        "Une erreur s'est produite lors de l'exécution de la commande.",
        "Houve um erro quando o comando foi executado.",
        "",
        "",
        "Se produjo un error al ejecutar el comando.",
    };

    // 0x100f39680
    const void* LocalisedText::DEBUG_CONSOLE_UNKNOWNCOMMAND[7] = {
        "Unknown developer command: ", "Unbekannter Befehl: ", "Commande inconnue : ", "Comando desconhecido: ", "", "",
        "Comando desconocido: ",
    };

    // 0x100f396b8
    const void* LocalisedText::CANCEL[7] = {
        "Cancel", "Abbrechen", "Annuler", "Cancelar", "", "", "Cancelar",
    };

    // 0x100f396f0
    const void* LocalisedText::NO_NAME_PLAYERNAME[7] = {
        "#Player", "#Spieler", "#Joueur", "#Jogador", "", "", "#Jugador",
    };

    // 0x100f39728
    int32_t LocalisedText::MEMBERS_DESC[14] = {
        "Login to a members' server to use this object.",
        "Du musst auf einer Mitglieder-Welt sein, um diesen Gegenstand zu benutzen.",
        "Connectez-vous à un serveur d'abonnés pour utiliser cet objet.",
        "Acesse um servidor para membros para usar este objeto.",
        "",
        "",
        "Accede a un servidor para miembros para usar este objeto.",
    };

    // 0x100f39760
    const void* LocalisedText::SWAP_NOTE_AT_BANK[7] = {
        "Swap this note at any bank for the equivalent item.",
        "Dieses Zertifikat kann in einer Bank entsprechend eingetauscht werden.",
        "Échangez ce reçu contre l'objet correspondant dans la banque de votre choix.",
        "Vá a qualquer banco para trocar esta nota pelo objeto equivalente.",
        "",
        "",
        "Cambia este vale en cualquier banco por el objeto equivalente.",
    };

    // 0x100f39798
    const void* LocalisedText::LENT_ITEM_RETURN[7] = {
        "Discard", "Ablegen", "Jeter", "Descartar", "", "", "Descartar",
    };

    // 0x100f397d0
    const void* LocalisedText::BOUGHT_ITEM_DISCARD[7] = {
        "Discard", "Ablegen", "Jeter", "Descartar", "", "", "Descartar",
    };

    // 0x100f39808
    const void* LocalisedText::SHARD_DESC_1[7] = {
        "Combine ", "Kombiniere ", "Vous pouvez combiner ", "Você pode trocar ", "", "", "Puedes combinar ",
    };

    // 0x100f39840
    int32_t LocalisedText::SHARD_DESC_2[14] = {
        " shards of this type to receive a ",
        " dieser Fragmente, um folgenden Gegenstand herzustellen: ",
        " de ces fragments pour obtenir l'objet suivant : ",
        " desses fragmentos pelo seguinte objeto: ",
        "",
        "",
        " de estos fragmentos para obtener el siguiente objeto: ",
    };

    // 0x100f39878
    const void* LocalisedText::SHARD_COMBINE_OP[7] = {
        "Combine", "Kombinieren", "Combiner", "Combinar", "", "", "Combinar",
    };

    // 0x100f398b0
    const void* LocalisedText::TAKE[7] = {
        "Take", "Nehmen", "Prendre", "Pegar", "", "", "Agarrar",
    };

    // 0x100f398e8
    const void* LocalisedText::DROP[7] = {
        "Drop", "Fallen lassen", "Poser", "Largar", "", "", "Dejar",
    };

    // 0x100f39920
    const void* LocalisedText::OK[7] = {
        "Ok", "Okay", "OK", "Ok", "", "", "OK",
    };

    // 0x100f39958
    const void* LocalisedText::SELECT[7] = {
        "Select", "Auswählen", "Sélectionner", "Selecionar", "", "", "Seleccionar",
    };

    // 0x100f39990
    const void* LocalisedText::CONTINUE[7] = {
        "Continue", "Weiter", "Continuer", "Continuar", "", "", "Continuar",
    };

    // 0x100f399c8
    const void* LocalisedText::INVALID_PLAYER_NAME[7] = {
        "Invalid player name.",
        "Unzulässiger Charaktername!",
        "Nom de joueur incorrect.",
        "Nome de jogador inválido.",
        "",
        "",
        "Nombre de jugador no válido.",
    };

    // 0x100f39a00
    const void* LocalisedText::YOU_CANT_REPORT_YOURSELF[7] = {
        "You can't report yourself!",
        "Du kannst dich nicht selbst melden!",
        "Vous ne pouvez pas vous signaler vous-même !",
        "Você não pode denunciar a si próprio!",
        "",
        "",
        "¡No te puedes denunciar a ti mismo!",
    };

    // 0x100f39a38
    const void* LocalisedText::YOU_ALREADY_SENT_A_SNAPSHOT1[7] = {
        "You have sent too many abuse reports today! Do not abuse this system!",
        "Du hast heute schon zu viele Regelverstöße gemeldet! Missbrauch das System nicht!",
        "Vous avez signalé trop d’abus pour aujourd’hui. N’abusez pas de ce système !",
        "Você já denunciou abuso muitas vezes hoje. Não abuse do sistema!",
        "",
        "",
        "¡Ya has denunciado demasiadas infracciones hoy! ¡No abuses del sistema!",
    };

    // 0x100f39a70
    int32_t LocalisedText::YOU_CANNOT_REPORT_STAFF_FOR_IMPERSONATION1[14] = {
        "You cannot report that person for Staff Impersonation, they are Jagex Staff.",
        "Diese Person ist ein Jagex-Mitarbeiter!",
        "Cette personne est un membre du personnel de Jagex, vous ne pouvez pas la signaler pour abus d'identité.",
        "Você não pode denunciar essa pessoa por tentar se passar por um membro da equipe Jagex, pois ela faz parte da "
        "equipe.",
        "",
        "",
        "Esa persona es miembro del personal de Jagex, no puedes denunciarla por suplantación de identidad.",
    };

    // 0x100f39aa8
    const void* LocalisedText::YOU_CANNOT_REPORT_STAFF_FOR_IMPERSONATION2[7] = {
        "You can spot a Jagex moderator by the gold crown next to their name.",
        "Jagex-Mitarbeiter haben eine goldene Krone neben ihrem Namen.",
        "Vous pouvez reconnaître les modérateurs Jagex à la couronne dorée en regard de leur nom.",
        "Os moderadores da Jagex são identificados por uma coroa dourada ao lado de seu nome.",
        "",
        "",
        "Los moderadores de Jagex tienen una corona dorada a un lado del nombre.",
    };

    // 0x100f39ae0
    const void* LocalisedText::YOU_CANNOT_REPORT_STAFF_FOR_IMPERSONATION3[7] = {
        "You can report that person under a different rule.",
        "Diese Person kann bezüglich einer anderen Regel gemeldet werden.",
        "Vous pouvez signaler cette personne pour une autre infraction aux règles.",
        "Você pode denunciar essa pessoa por outro tipo de infração.",
        "",
        "",
        "Puedes denunciar a esa persona por otro tipo de infracción.",
    };

    // 0x100f39b18
    int32_t LocalisedText::ABUSE_REPORT_RECEIVED[14] = {
        "Thank-you, your abuse report has been received.",
        "Vielen Dank, deine Meldung ist bei uns eingegangen.",
        "Merci, nous avons bien reçu votre rapport d'abus.",
        "Obrigado. Sua denúncia de abuso foi recebida.",
        "",
        "",
        "Gracias, hemos recibido tu denuncia.",
    };

    // 0x100f39b50
    const void* LocalisedText::UNABLE_TO_SEND_SNAPSHOT_BUSY[7] = {
        "Unable to send abuse report - system busy.",
        "Meldung konnte nicht gesendet werden - Systeme überlastet",
        "Impossible de signaler un abus - Erreur système",
        "Sistema ocupado. Não foi possível enviar sua denúncia de abuso.",
        "",
        "",
        "Sistema ocupado. No ha sido posible enviar tu denuncia.",
    };

    // 0x100f39b88
    const void* LocalisedText::INVALID_NAME[7] = {
        "Invalid name", "Unzulässiger Name!", "Nom incorrect", "Nome inválido", "", "", "Nombre no válido",
    };

    // 0x100f39bc0
    int32_t LocalisedText::USE_MEMBERS_SERVER_ITEM[14] = {
        "To use this item please login to a members' server.",
        "Du musst auf einer Mitglieder-Welt sein, um diesen Gegenstand zu benutzen.",
        "Veuillez vous connecter à un serveur d'abonnés pour utiliser cet objet.",
        "Acesse um servidor para membros para usar este objeto.",
        "",
        "",
        "Accede a un servidor para miembros para usar este objeto.",
    };

    // 0x100f39bf8
    int32_t LocalisedText::USE_MEMBERS_SERVER_LOCATION[14] = {
        "To interact with this please login to a members' server.",
        "Logg dich auf einer Mitglieder-Welt ein, um damit zu interagieren.",
        "Veuillez vous connecter à un serveur d'abonnés pour cette interaction.",
        "Para interagir, acesse um servidor para membros.",
        "",
        "",
        "Para interactuar, accede a un servidor para miembros.",
    };

    // 0x100f39c30
    const void* LocalisedText::NOTHING_INTERESTING_HAPPENS[7] = {
        "Nothing interesting happens.",
        "Nichts Interessantes passiert.",
        "Il ne se passe rien d'intéressant.",
        "Nada de interessante acontece.",
        "",
        "",
        "No sucede nada interesante.",
    };

    // 0x100f39c68
    const void* LocalisedText::I_CANT_REACH_THAT[7] = {
        "You can't reach that.",
        "Da kommst du nicht hin.",
        "Vous ne pouvez pas l'atteindre.",
        "Você não consegue alcançar isso.",
        "",
        "",
        "No puedes alcanzar eso.",
    };

    // 0x100f39ca0
    const void* LocalisedText::INVALID_TELEPORT[7] = {
        "Invalid teleport!",
        "Unzulässiger Teleport!",
        "Téléportation non valide !",
        "Teleporte inválido!",
        "",
        "",
        "¡Teletransporte no válido!",
    };

    // 0x100f39cd8
    int32_t LocalisedText::USE_MEMBERS_SERVER_COORD[14] = {
        "To go here you must login to a members' server.",
        "Du musst auf einer Mitglieder-Welt sein, um dort hinzukommen.",
        "Vous devez vous connecter à un serveur d'abonnés pour aller à cet endroit.",
        "Para entrar aqui, acesse um servidor para membros.",
        "",
        "",
        "Para entrar aquí, debes acceder a un servidor para miembros.",
    };

    // 0x100f39d10
    int32_t LocalisedText::UNABLE_TO_ADD_FRIEND_SYSTEM[14] = {
        "Unable to add friend - system busy.",
        "Der Freund konnte nicht hinzugefügt werden, das System ist derzeit ausgelastet.",
        "Impossible d'ajouter un ami - système occupé.",
        "Não foi possível adicionar o amigo. O sistema está ocupado.",
        "",
        "",
        "Sistema ocupado. No es posible añadir a un amigo.",
    };

    // 0x100f39d48
    const void* LocalisedText::UNABLE_TO_ADD_FRIEND_EXISTS[7] = {
        "Unable to add friend - unknown player.",
        "Spieler konnte nicht hinzugefügt werden - Spieler unbekannt.",
        "Impossible d'ajouter l'ami - joueur inconnu.",
        "Não foi possível adicionar esse amigo - jogador desconhecido.",
        "",
        "",
        "Jugador desconocido. No es posible añadir a ese amigo.",
    };

    // 0x100f39d80
    int32_t LocalisedText::UNABLE_TO_ADD_IGNORE_SYSTEM[14] = {
        "Unable to add name - system busy.",
        "Der Name konnte nicht hinzugefügt werden, das System ist derzeit ausgelastet.",
        "Impossible d'ajouter un nom - système occupé.",
        "Não foi possível adicionar o nome. O sistema está ocupado.",
        "",
        "",
        "Sistema ocupado. No es posible añadir el nombre.",
    };

    // 0x100f39db8
    const void* LocalisedText::UNABLE_TO_ADD_IGNORE_EXISTS[7] = {
        "Unable to add name - unknown player.",
        "Name konnte nicht hinzugefügt werden - Spieler unbekannt.",
        "Impossible d'ajouter le nom - joueur inconnu.",
        "Não foi possível adicionar esse nome - jogador desconhecido.",
        "",
        "",
        "Jugador desconocido. No es posible añadir el nombre.",
    };

    // 0x100f39df0
    int32_t LocalisedText::FRIENDLIST_FULL_FREE[14] = {
        "Your friends list is full (200 names maximum)",
        "Deine Freunde-Liste ist voll, du hast das Maximum von 200 erreicht.",
        "Votre liste d'amis est pleine (200 noms maximum).",
        "Sua lista de amigos está cheia. O limite é de 200 nomes.",
        "",
        "",
        "Tu lista de amigos está llena. El límite es de 200 amigos.",
    };

    // 0x100f39e28
    int32_t LocalisedText::FRIENDLIST_FULL_MEMBERS[14] = {
        "Your friends list is full (400 names maximum)",
        "Deine Freunde-Liste ist voll, du hast das Maximum von 400 erreicht.",
        "Votre liste d'amis est pleine (400 noms maximum).",
        "Sua lista de amigos está cheia. O limite é de 400 nomes.",
        "",
        "",
        "Tu lista de amigos está llena. El límite es de 400 amigos.",
    };

    // 0x100f39e60
    int32_t LocalisedText::UNABLE_TO_DELETE_FRIEND[14] = {
        "Unable to delete friend - system busy.",
        "Der Freund konnte nicht entfernt werden, das System ist derzeit ausgelastet.",
        "Impossible de supprimer un ami - système occupé.",
        "Não foi possível excluir o amigo. O sistema está ocupado.",
        "",
        "",
        "Servidor ocupado. No es posible borrar al amigo.",
    };

    // 0x100f39e98
    const void* LocalisedText::UNABLE_TO_DELETE_FRIEND_NAME[7] = {
        "Unable to delete friend - unknown player",
        "Freund konnte nicht entfernt werden - unbekannter Spieler.",
        "Impossible de supprimer l'ami - joueur inconnu.",
        "Não é possível excluir o amigo - jogador desconhecido.",
        "",
        "",
        "No se puede eliminar a ese amigo. Jugador desconocido.",
    };

    // 0x100f39ed0
    const void* LocalisedText::UNABLE_TO_DELETE_IGNORE[7] = {
        "Unable to delete name - system busy.",
        "Name konnte nicht gelöscht werden - Systemfehler.",
        "Impossible d'effacer le nom - système occupé.",
        "Não foi possível deletar o nome - sistema ocupado.",
        "",
        "",
        "Sistema ocupado. No es posible borrar el nombre.",
    };

    // 0x100f39f08
    const void* LocalisedText::UNABLE_TO_DELETE_IGNORE_NAME[7] = {
        "Unable to delete name - unknown player.",
        "Name konnte nicht entfernt werden - unbekannter Spieler.",
        "Impossible de supprimer le nom - joueur inconnu.",
        "Não é possível excluir o nome - jogador desconhecido.",
        "",
        "",
        "No se puede borrar el nombre. Jugador desconocido.",
    };

    // 0x100f39f40
    int32_t LocalisedText::UNABLE_TO_SEND_MESSAGE_BUSY[14] = {
        "Unable to send message - system busy.",
        "Deine Nachricht konnte nicht verschickt werden, das System ist derzeit ausgelastet.",
        "Impossible d'envoyer un message - système occupé.",
        "Não foi possível enviar a mensagem. O sistema está ocupado.",
        "",
        "",
        "Sistema ocupado. No es posible enviar el mensaje.",
    };

    // 0x100f39f78
    int32_t LocalisedText::UNABLE_TO_SEND_MESSAGE_UNAVAILABLE1[14] = {
        "Unable to send message - player unavailable.",
        "Deine Nachricht konnte nicht verschickt werden,",
        "Impossible d'envoyer un message - joueur indisponible.",
        "Não foi possível enviar a mensagem. O jogador não está disponível.",
        "",
        "",
        "No es posible enviar el mensaje, el jugador no está disponible.",
    };

    // 0x100f39fb0
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_UNAVAILABLE2[7] = {
        nullptr, "der Spieler ist momentan nicht verfügbar.", nullptr, nullptr, nullptr, nullptr, nullptr,
    };

    // 0x100f39fe8
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_NOTFRIEND1[7] = {
        "Unable to send message - player not on your friends list.",
        "Nachricht kann nicht geschickt werden,",
        "Impossible d'envoyer un message - joueur non inclus dans votre liste d'amis.",
        "Não foi possível enviar a mensagem. O jogador não está na sua lista de amigos.",
        "",
        "",
        "No es posible enviar el mensaje. El jugador no está en tu lista de amigos.",
    };

    // 0x100f3a020
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_NOTFRIEND2[7] = {
        nullptr, "Spieler nicht auf deiner Freunde-Liste.", nullptr, nullptr, nullptr, nullptr, nullptr,
    };

    // 0x100f3a058
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_PASSWORD_A[7] = {
        "You appear to be telling someone your password - please don't!",
        "Willst du jemandem dein Passwort verraten? Das darfst du nicht! Falls das",
        "Il semble que vous révéliez votre mot de passe à quelqu'un - ne faites jamais ça !",
        "Parece que você está revelando sua senha a alguém. Não faça isso!",
        "",
        "",
        "Parece que le estás revelando a alguien tu contraseña. ¡No debes hacerlo!",
    };

    // 0x100f3a090
    int32_t LocalisedText::UNABLE_TO_SEND_MESSAGE_PASSWORD_B[14] = {
        "If you are not, please change your password to something more obscure!",
        "nicht der Fall ist, ändere dein Passwort zu einem ungewöhnlicheren Begriff!",
        "Si ce n'est pas le cas, remplacez votre mot de passe par une formule moins évidente !",
        "Caso não esteja, altere sua senha para algo mais obscuro!",
        "",
        "",
        "¡Si no es así, cambia tu contraseña por una menos evidente!",
    };

    // 0x100f3a0c8
    int32_t LocalisedText::UNABLE_TO_SEND_MESSAGE_NO_DISPLAYNAME_1[14] = {
        "Unable to send message - set your display name first by logging into the game.",
        "Nachricht konnte nicht gesendet werden.  Bitte richte erst deinen Charakternamen ein, ",
        "Impossible d'envoyer le message - enregistrez un nom de personnage en vous connectant au jeu.",
        "Não é possível enviar a mensagem. Defina um nome de personagem primeiro, fazendo login no jogo.",
        "",
        "",
        "No es posible enviar el mensaje. Registra primero un nombre de personaje conectándote al juego.",
    };

    // 0x100f3a100
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_NO_DISPLAYNAME_2[7] = {
        nullptr, "indem du dich ins Spiel einloggst.", nullptr, nullptr, nullptr, nullptr, nullptr,
    };

    // 0x100f3a138
    int32_t LocalisedText::SNAPSHOT_BUFFER_EMPTY1[14] = {
        "For that rule you can only report players who have spoken or traded recently.",
        "Mit dieser Option können nur Spieler gemeldet werden,",
        "Cette règle n'est invocable que pour les discussions ou échanges récents.",
        "Para essa regra, você só pode denunciar jogadores com quem tenha falado ou negociado recentemente.",
        "",
        "",
        "Sólo puedes denunciar por esa regla a jugadores que hayan hablado o comerciado recientemente.",
    };

    // 0x100f3a170
    const void* LocalisedText::SNAPSHOT_BUFFER_EMPTY2[7] = {
        nullptr, "die kürzlich gesprochen oder gehandelt haben.", nullptr, nullptr, nullptr, nullptr, nullptr,
    };

    // 0x100f3a1a8
    int32_t LocalisedText::NAMEDIALOG_NOTFOUND[14] = {
        "That player is offline, or has privacy mode enabled.",
        "Dieser Spieler ist offline oder hat den Privatsphären-Modus aktiviert.",
        "Ce joueur est déconnecté ou en mode privé.",
        "O jogador está offline ou está com o modo de privacidade ativado.",
        "",
        "",
        "Este jugador está desconectado o activó el modo de privacidad.",
    };

    // 0x100f3a1e0
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_QUICKCHAT1[7] = {
        "You cannot send a quick chat message to a player on this world at this time.",
        "Einem Spieler auf dieser Welt können derzeit keine Direktchat-Nachrichten",
        "Impossible d'envoyer un message rapide à un joueur de ce serveur à l'heure actuelle.",
        "Você não pode enviar uma mensagem de papo rápido para um jogador neste mundo neste momento.",
        "",
        "",
        "En estos momentos no puedes enviar un mensaje rápido de chat a un jugador en este mundo.",
    };

    // 0x100f3a218
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_QUICKCHAT2[7] = {
        nullptr, "geschickt werden.", nullptr, nullptr, nullptr, nullptr, nullptr,
    };

    // 0x100f3a250
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_QUICKCHATWORLD1[7] = {
        "This player is on a quick chat world and cannot receive your message.",
        "Der Spieler kann auf einer Direktchat-Welt keine Nachrichten empfangen.",
        "Ce joueur est sur un serveur à messagerie rapide et ne peut pas recevoir votre message.",
        "Este jogador não pode receber sua mensagem porque está em um mundo de papo rápido.",
        "",
        "",
        "Este jugador no puede recibir su mensaje porque está en un mundo de chat rápido.",
    };

    // 0x100f3a288
    const void* LocalisedText::CHAT_DISABLED[7] = {
        "Chat disabled", "Deaktiviert", "Messagerie désactivée", "Bate-papo desativado", "", "", "Chat desactivado",
    };

    // 0x100f3a2c0
    const void* LocalisedText::UNDER13_FRIENDSCHAT_PREFIX[7] = {
        "friends_chat", "friends_chat", "friends_chat", "friends_chat", "", "", "friends_chat",
    };

    // 0x100f3a2f8
    int32_t LocalisedText::UNABLE_TO_SEND_MESSAGE_NOT_IN_FRIENDS_CHAT[14] = {
        "You are not currently in a friends chat channel.",
        "Du befindest dich derzeit nicht in einem Freundes-Chatraum.",
        "Vous ne faites pas partie d'un canal de discussion.",
        "No momento, você não está no bate-papo entre amigos.",
        "",
        "",
        "Actualmente no estás en un canal de chat entre amigos.",
    };

    // 0x100f3a330
    const void* LocalisedText::UNABLE_TO_SEND_MESSAGE_FRIENDS_CHAT_TOO_LOW_RANK[7] = {
        "You are not allowed to talk in this friends chat channel.",
        "Du darfst in diesem Freundes-Chatraum nicht reden.",
        "Vous n'êtes pas autorisé à parler dans ce canal de discussion.",
        "Você não está autorizado a falar neste bate-papo entre amigos.",
        "",
        "",
        "No estás autorizado a hablar en este canal de chat entre amigos.",
    };

    // 0x100f3a368
    int32_t LocalisedText::UNABLE_TO_SEND_MESSAGE_FRIENDS_CHAT_ERROR[14] = {
        "Error sending message to friends chat - please try again later!",
        "Fehler beim Versenden der Nachricht - bitte versuch es später erneut.",
        "Erreur lors de l'envoi de ce message – veuillez réessayer ultérieurement !",
        "Erro ao enviar mensagem para bate-papo entre amigos - tente novamente mais tarde!",
        "",
        "",
        "Se ha producido un error al enviar un mensaje al chat entre amigos, por favor, inténtalo más tarde.",
    };

    // 0x100f3a3a0
    int32_t LocalisedText::FRIENDS_CHAT_STILL_IN_CHANNEL[14] = {
        "Please wait until you are logged out of your previous channel.",
        "Bitte warte, bis du den vorherigen Chatraum verlassen hast.",
        "Veuillez attendre d'être déconnecté(e) de votre canal précédent.",
        "Aguarde até se desconectar do canal anterior.",
        "",
        "",
        "Por favor, espera hasta haberte desconectado del anterior chat.",
    };

    // 0x100f3a3d8
    const void* LocalisedText::FRIENDS_CHAT_NOT_IN_CHANNEL[7] = {
        "You are not currently in a channel.",
        "Du befindest dich derzeit nicht in einem Chatraum.",
        "Vous n'êtes dans aucun canal à l'heure actuelle.",
        "No momento você não está em um canal.",
        "",
        "",
        "En este momento no estás en un canal.",
    };

    // 0x100f3a410
    const void* LocalisedText::FRIENDS_CHAT_ATTEMPTING_JOIN[7] = {
        "Attempting to join channel...",
        "Chatraum wird betreten...",
        "Tentative de connexion au canal...",
        "Tentando acessar canal...",
        "",
        "",
        "Intentando acceder a un canal...",
    };

    // 0x100f3a448
    const void* LocalisedText::FRIENDS_CHAT_SENDING_LEAVE_REQ[7] = {
        "Sending request to leave channel...",
        "Chatraum wird verlassen...",
        "Envoi de la demande de sortie du canal...",
        "Enviando solicitação para sair do canal...",
        "",
        "",
        "Enviando solicitud para abandonar el canal...",
    };

    // 0x100f3a480
    int32_t LocalisedText::FRIENDS_CHAT_JOIN_IN_PROGRESS[14] = {
        "Already attempting to join a channel - please wait...",
        "Du versuchst bereits, einem Chatraum beizutreten - bitte warte.",
        "Tentative de connexion au canal déjà en cours - veuillez patienter...",
        "Já há uma tentativa de entrar em um canal. Aguarde...",
        "",
        "",
        "Ya estás intentando unirte a un canal. Por favor, espera...",
    };

    // 0x100f3a4b8
    int32_t LocalisedText::FRIENDS_CHAT_LEAVE_IN_PROGRESS[14] = {
        "Leave request already in progress - please wait...",
        "Du versuchst bereits, einen Chatraum zu verlassen - bitte warte.",
        "Demande de sortie déjà effectuée - veuillez patienter...",
        "Solicitação de saída já em andamento. Aguarde...",
        "",
        "",
        "La salida del canal está procesándose. Por favor, espera...",
    };

    // 0x100f3a4f0
    const void* LocalisedText::FRIENDS_CHAT_INVALID_NAME[7] = {
        "Invalid channel name entered!",
        "Ungültiger Chatraum-Name angegeben.",
        "Nom de canal incorrect !",
        "Nome de canal inválido!",
        "",
        "",
        "¡Nombre de canal no valido!",
    };

    // 0x100f3a528
    int32_t LocalisedText::FRIENDS_CHAT_NOT_AVAILABLE[14] = {
        "Unable to join friends chat at this time - please try again later!",
        "Freundes-Chatraum kann nicht betreten werden - bitte versuch es später erneut.",
        "Vous ne pouvez pas rejoindre ce canal de discussion pour le moment - veuillez réessayer ultérieurement !",
        "Não foi possível entrar no bate-papo entre amigos - tente novamente mais tarde!",
        "",
        "",
        "Ahora mismo no es posible unirse al chat entre amigos. ¡Por favor, inténtalo más tarde!",
    };

    // 0x100f3a560
    const void* LocalisedText::FRIENDS_CHAT_JOIN_SUCCESS_A[7] = {
        "Now talking in friends chat channel ",
        "Freundes-Chatraum: ",
        "Vous participez actuellement au canal de discussion : ",
        "Falando agora no bate-papo entre amigos: ",
        "",
        "",
        "Hablando ahora en el chat entre amigos: ",
    };

    // 0x100f3a598
    const void* LocalisedText::FRIENDS_CHAT_JOIN_SUCCESS_A_U13[7] = {
        "Now talking in friends chat channel of player: ",
        "Freundes-Chat dieses Spielers beigetreten: ",
        "Vous participez actuellement au canal de discussion du joueur : ",
        "Falando agora no bate-papo entre amigos do jogador: ",
        "",
        "",
        "Hablando ahora en el canal de chat entre amigos del jugador: ",
    };

    // 0x100f3a5d0
    int32_t LocalisedText::FRIENDS_CHAT_JOIN_ERROR[14] = {
        "Error joining friends chat channel - please try again later!",
        "Fehler beim Betreten des Freundes-Chatraums - bitte versuch es später erneut.",
        "Erreur lors de la connexion au canal de discussion - veuillez réessayer ultérieurement !",
        "Erro ao participar do bate-papo entre amigos - tente novamente mais tarde!",
        "",
        "",
        "Se ha producido un error al acceder al canal de chat entre amigos. ¡Por favor, inténtalo más tarde!",
    };

    // 0x100f3a608
    const void* LocalisedText::FRIENDS_CHAT_JOIN_ATTACKBLOCKED[7] = {
        "You are temporarily blocked from joining channels - please try again later!",
        "Du darfst derzeit keine Chaträume betreten - bitte versuch es später.",
        "Vous êtes temporairement exclu des canaux - veuillez réessayer ultérieurement.",
        "Você está temporariamente impedido de entrar em canais. Tente novamente mais tarde!",
        "",
        "",
        "De momento tienes bloqueado el acceso a los canales chat. ¡Inténtalo de nuevo más tarde!",
    };

    // 0x100f3a640
    const void* LocalisedText::FRIENDS_CHAT_JOIN_NOTEXIST[7] = {
        "The channel you tried to join does not exist.",
        "Der von dir gewünschte Chatraum existiert nicht.",
        "Le canal que vous essayez de rejoindre n'existe pas.",
        "O canal que você tentou acessar não existe.",
        "",
        "",
        "El canal al que intentas unirte no existe.",
    };

    // 0x100f3a678
    const void* LocalisedText::FRIENDS_CHAT_JOIN_ROOMFULL[7] = {
        "The channel you tried to join is currently full.",
        "Der von dir gewünschte Chatraum ist derzeit überfüllt.",
        "Le canal que vous essayez de rejoindre est plein.",
        "O canal que você tentou acessar está cheio no momento.",
        "",
        "",
        "El canal al que intentas unirte está lleno en estos momentos.",
    };

    // 0x100f3a6b0
    int32_t LocalisedText::FRIENDS_CHAT_JOIN_LOWRANK[14] = {
        "You do not have a high enough rank to join this friends chat channel.",
        "Dein Rang reicht nicht aus, um diesen Freundes-Chatraum zu betreten.",
        "Votre rang n'est pas assez élevé pour rejoindre ce canal de discussion.",
        "Você não tem uma classificação alta o suficiente para participar deste bate-papo entre amigos.",
        "",
        "",
        "No tienes rango suficiente para unirte a este canal de chat entre amigos.",
    };

    // 0x100f3a6e8
    const void* LocalisedText::FRIENDS_CHAT_JOIN_BANNED[7] = {
        "You are temporarily banned from this friends chat channel.",
        "Du wurdest temporär von diesem Freundes-Chatraum gesperrt.",
        "Vous avez été exclu temporairement de ce canal de discussion.",
        "Você foi temporariamente banido deste bate-papo entre amigos.",
        "",
        "",
        "Tienes bloqueado temporalmente el acceso a este chat entre amigos.",
    };

    // 0x100f3a720
    const void* LocalisedText::FRIENDS_CHAT_JOIN_IGNORELIST[7] = {
        "You are not allowed to join this user's friends chat channel.",
        "Du darfst den Freundes-Chatraum dieses Benutzers nicht betreten.",
        "Vous n'êtes pas autorisé à rejoindre le canal de discussion de cet utilisateur.",
        "Você não pode entrar nesse bate-papo entre amigos deste usuário.",
        "",
        "",
        "No tienes permiso para acceder al canal de chat entre amigos de este usuario.",
    };

    // 0x100f3a758
    const void* LocalisedText::FRIENDS_CHAT_USER_JOINED[7] = {
        " joined the channel.",   " hat den Chatraum betreten.", " a rejoint le canal.", " entrou no canal.", "", "",
        " se ha unido al canal.",
    };

    // 0x100f3a790
    const void* LocalisedText::FRIENDS_CHAT_USER_LEFT[7] = {
        " left the channel.",       " hat den Chatraum verlassen.", " a quitté le canal.", " saiu do canal.", "", "",
        " ha abandonado el canal.",
    };

    // 0x100f3a7c8
    const void* LocalisedText::FRIENDS_CHAT_USER_KICKED[7] = {
        " was kicked from the channel.",
        " wurde aus dem Chatraum rausgeworfen.",
        " a été expulsé du canal.",
        " foi expulso do canal.",
        "",
        "",
        " ha sido expulsado del canal.",
    };

    // 0x100f3a800
    const void* LocalisedText::FRIENDS_CHAT_LEAVE_KICKED[7] = {
        "You have been kicked from the channel.",
        "Du wurdest aus dem Chatraum rausgeworfen.",
        "Vous avez été expulsé du canal.",
        "Você foi expulso do canal.",
        "",
        "",
        "Se te ha expulsado del canal.",
    };

    // 0x100f3a838
    const void* LocalisedText::FRIENDS_CHAT_LEAVE_REMOVED[7] = {
        "You have been removed from this channel.",
        "Du wurdest aus dem Chatraum entfernt.",
        "Vous avez été supprimé de ce canal.",
        "Você foi retirado desse canal.",
        "",
        "",
        "Se te ha eliminado de este canal.",
    };

    // 0x100f3a870
    const void* LocalisedText::FRIENDS_CHAT_LEAVE_DEFAULT[7] = {
        "You have left the channel.",
        "Du hast den Chatraum verlassen.",
        "Vous avez quitté le canal.",
        "Você saiu do canal.",
        "",
        "",
        "Has salido del canal.",
    };

    // 0x100f3a8a8
    const void* LocalisedText::FRIENDS_CHAT_ENABLED_A[7] = {
        "Your friends chat channel has now been enabled!",
        "Dein Freundes-Chat ist jetzt eingeschaltet.",
        "Votre canal de discussion est maintenant activé !",
        "O seu bate-papo entre amigos foi ativado!",
        "",
        "",
        "¡Tu canal de chat entre amigos está activado!",
    };

    // 0x100f3a8e0
    int32_t LocalisedText::FRIENDS_CHAT_ENABLED_B[14] = {
        "Join your channel by clicking 'Join Chat' and typing: ",
        "Klick auf 'Betreten' und gib ein: ",
        "Pour rejoindre votre canal, cliquez sur « Participer » et entrez : ",
        "Para entrar no seu canal, clique em \"Acessar bate-papo\" e digite: ",
        "",
        "",
        "Para entrar en tu canal, haz clic sobre 'Participar' e introduce: ",
    };

    // 0x100f3a918
    const void* LocalisedText::FRIENDS_CHAT_DISABLED[7] = {
        "Your friends chat channel has now been disabled!",
        "Dein Freundes-Chat ist jetzt ausgeschaltet.",
        "Votre canal de discussion est maintenant désactivé !",
        "O seu bate-papo entre amigos foi desativado!",
        "",
        "",
        "¡Tu canal de chat entre amigos ha sido desactivado!",
    };

    // 0x100f3a950
    const void* LocalisedText::FRIENDS_CHAT_KICK_LOW_RANK[7] = {
        "You do not have permission to kick users in this channel.",
        "Du darfst keine Benutzer aus diesem Chatraum rauswerfen.",
        "Vous n'êtes pas autorisé à expulser des utilisateurs de ce canal.",
        "Você não tem permissão para expulsar usuários neste canal.",
        "",
        "",
        "No tienes autorización para expulsar a usuarios de este canal.",
    };

    // 0x100f3a988
    const void* LocalisedText::FRIENDS_CHAT_KICK_USER_HIGHER[7] = {
        "You do not have permission to kick this user.",
        "Du darfst diesen Benutzer nicht rauswerfen.",
        "Vous n'êtes pas autorisé à expulser cet utilisateur.",
        "Você não tem permissão para expulsar este usuário.",
        "",
        "",
        "No tienes autorización para expulsar a este usuario.",
    };

    // 0x100f3a9c0
    const void* LocalisedText::FRIENDS_CHAT_KICK_NOT_FOUND[7] = {
        "That user is not in this channel.",
        "Dieser Benutzer befindet sich nicht in diesem Chatraum.",
        "Cet utilisateur n'est pas dans ce canal.",
        "Esse usuário não está no canal.",
        "",
        "",
        "Ese usuario no está en este canal.",
    };

    // 0x100f3a9f8
    const void* LocalisedText::FRIENDS_CHAT_KICK_SUCCESS[7] = {
        "Your request to kick/ban this user was successful.",
        "Der Rauswurf/die Sperrung war erfolgreich.",
        "Votre demande d'exclusion de ce joueur a été acceptée.",
        "Seu pedido para expulsar/suspender este jogador foi bem sucedido.",
        "",
        "",
        "Tu petición de expulsar/suspender a este usuario ha sido aceptada.",
    };

    // 0x100f3aa30
    const void* LocalisedText::FRIENDS_CHAT_KICK_SUCCESS_RESET[7] = {
        "Your request to refresh this user's temporary ban was successful.",
        "Die Verlängerung der temporären Sperrung dieses Spielers war erfolgreich.",
        "Le renouvellement d'exclusion temporaire de ce joueur a été accepté.",
        "Seu pedido para reiniciar a suspensão temporária deste jogador foi bem sucedido.",
        "",
        "",
        "Tu petición de prolongar la suspensión temporal de este usuario ha sido aceptada.",
    };

    // 0x100f3aa68
    const void* LocalisedText::MUTED_TEMPORARY[7] = {
        "You have been temporarily muted due to breaking a rule.",
        "Aufgrund eines Regelverstoßes wurdest du vorübergehend stumm geschaltet.",
        "La messagerie instantanée a été temporairement bloquée suite à une infraction.",
        "Você foi temporariamente vetado por ter violado uma regra.",
        "",
        "",
        "Se te ha vetado temporalmente por haber violado una regla.",
    };

    // 0x100f3aaa0
    const void* LocalisedText::MUTED_TEMPORARY_TIME_A[7] = {
        "This mute will remain for a further ",
        "Diese Stummschaltung gilt für weitere ",
        "Votre accès restera bloqué encore ",
        "Este veto permanecerá por mais ",
        "",
        "",
        "Este veto permancereá activo todavía durante ",
    };

    // 0x100f3aad8
    const void* LocalisedText::MUTED_TEMPORARY_TIME_B[7] = {
        " days.", " Tage.", " jours.", " dias.", "", "", " días.",
    };

    // 0x100f3ab10
    const void* LocalisedText::MUTED_TEMPORARY_1DAY[7] = {
        "You will be un-muted within 24 hours.",
        "Du wirst innerhalb der nächsten 24 Stunden wieder sprechen können.",
        "Vous aurez à nouveau accès à la messagerie instantanée dans 24 heures.",
        "O veto será retirado dentro de 24 horas.",
        "",
        "",
        "Tu veto se retirará dentro de las próximas 24 horas.",
    };

    // 0x100f3ab48
    int32_t LocalisedText::MUTED_PREVENT[14] = {
        "To prevent further mutes please read the rules.",
        "Um eine erneute Stummschaltung zu verhindern, lies bitte die Regeln.",
        "Pour éviter un nouveau blocage, lisez le règlement.",
        "Para evitar outros vetos, leia as regras.",
        "",
        "",
        "Para evitar otro veto, consulta el reglamento.",
    };

    // 0x100f3ab80
    int32_t LocalisedText::MUTED_PERMANENT[14] = {
        "You have been permanently muted due to breaking a rule.",
        "Du wurdest permanent stumm geschaltet, da du gegen eine Regel verstoßen hast.",
        "L'accès à la messagerie instantanée vous a définitivement été retiré suite à une infraction.",
        "Você foi permanentemente vetado por ter violado uma regra.",
        "",
        "",
        "Se te ha vetado permanentemente por haber violado una regla.",
    };

    // 0x100f3abb8
    int32_t LocalisedText::LOADING[14] = {
        "Loading - please wait.",
        "Ladevorgang - bitte warte.",
        "Chargement en cours. Veuillez patienter.",
        "Carregando. Aguarde.",
        "",
        "",
        "Cargando. Por favor, espera.",
    };

    // 0x100f3abf0
    const void* LocalisedText::LOADING_SHADERS[7] = {
        "Loading shaders...",  "Lade Shader...", "Chargement des nuanceurs...", "Carregando sombreadores...", "", "",
        "Cargando shaders...",
    };

    // 0x100f3ac28
    const void* LocalisedText::PRELOADING_SHADERS[7] = {
        "Pre-loading shaders...",
        "Vorbereitung der Shader...",
        "Préchargement des nuanceurs...",
        "Pré-carregando sombreadores...",
        "",
        "",
        "Precargando shaders...",
    };

    // 0x100f3ac60
    const void* LocalisedText::PRELOADING_OBJSPRITES[7] = {
        "Pre-loading inventory icons...",
        "Vorbereitung der Inventarsymbole...",
        "Préchargement des icônes de l'inventaire...",
        "Pré-carregando ícones do inventário...",
        "",
        "",
        "Precargando shaders...",
    };

    // 0x100f3ac98
    const void* LocalisedText::PREPARING_WORLD[7] = {
        "Pre-loading world...",
        "Vorbereitung der Umgebung...",
        "Préchargement de l'environnement...",
        "Pré-carregando mundo...",
        "",
        "",
        "Precargando mundo...",
    };

    // 0x100f3acd0
    const void* LocalisedText::PROFILING[7] = {
        "Profiling...", "Profiling...", "Profilage...", "Definindo perfil...", "", "", "Obteniendo perfil...",
    };

    // 0x100f3ad08
    const void* LocalisedText::CONLOST[7] = {
        "Connection lost.",  "Verbindung abgebrochen.", "Connexion perdue.", "Conexão perdida.", "", "",
        "Conexión perdida.",
    };

    // 0x100f3ad40
    int32_t LocalisedText::ATTEMPT_TO_REESTABLISH[14] = {
        "Please wait - attempting to reestablish.",
        "Bitte warte - es wird versucht, die Verbindung wiederherzustellen.",
        "Veuillez patienter - tentative de rétablissement.",
        "Tentando reestabelecer conexão. Aguarde.",
        "",
        "",
        "Estamos intentando restablecer la conexión. Por favor, espera.",
    };

    // 0x100f3ad78
    const void* LocalisedText::CHECKING_FOR_UPDATES[7] = {
        "Checking for updates - ",
        "Suche nach Updates - ",
        "Vérification des mises à jour - ",
        "Verificando atualizações - ",
        "",
        "",
        "Buscando actualizaciones - ",
    };

    // 0x100f3adb0
    const void* LocalisedText::DOWNLOADING_UPDATES[7] = {
        "Fetching Updates - ",         "Lade Update - ", "Chargement des MAJ - ", "Carregando atualizações - ", "", "",
        "Cargando actualizaciones - ",
    };

    // 0x100f3ade8
    const void* LocalisedText::MAINLOAD110[7] = {
        "Loading config - ",
        "Lade Konfiguration - ",
        "Chargement des fichiers config - ",
        "Carregando config - ",
        "",
        "",
        "Cargando configuración - ",
    };

    // 0x100f3ae20
    const void* LocalisedText::MAINLOAD110B[7] = {
        "Loaded config",         "Konfig geladen.", "Fichiers config chargés", "Config carregada", "", "",
        "Configuración cargada",
    };

    // 0x100f3ae58
    const void* LocalisedText::MAINLOAD120[7] = {
        "Loading sprites - ",  "Lade Sprites - ", "Chargement des sprites - ", "Carregando sprites - ", "", "",
        "Cargando sprites - ",
    };

    // 0x100f3ae90
    const void* LocalisedText::MAINLOAD120B[7] = {
        "Loaded sprites", "Sprites geladen.", "Sprites chargés", "Sprites carregados", "", "", "Sprites cargados",
    };

    // 0x100f3aec8
    const void* LocalisedText::MAINLOAD130[7] = {
        "Loading wordpack - ",
        "Lade Wordpack - ",
        "Chargement du module texte - ",
        "Carregando pacote de palavras - ",
        "",
        "",
        "Cargando el módulo de texto - ",
    };

    // 0x100f3af00
    const void* LocalisedText::MAINLOAD130B[7] = {
        "Loaded wordpack",         "Wordpack geladen.", "Module texte chargé", "Pacote de palavras carregado", "", "",
        "Módulo de texto cargado",
    };

    // 0x100f3af38
    const void* LocalisedText::MAINLOAD140[7] = {
        "Loading interfaces - ",
        "Lade Benutzeroberfläche - ",
        "Chargement des interfaces - ",
        "Carregando interfaces - ",
        "",
        "",
        "Cargando interfaces - ",
    };

    // 0x100f3af70
    const void* LocalisedText::MAINLOAD140B[7] = {
        "Loaded interfaces",   "Benutzeroberfläche geladen.", "Interfaces chargées", "Interfaces carregadas", "", "",
        "Interfaces cargadas",
    };

    // 0x100f3afa8
    const void* LocalisedText::MAINLOAD150[7] = {
        "Loading interface scripts - ",
        "Lade Interface-Skripte - ",
        "Chargement des interfaces - ",
        "Carregando scripts de interface - ",
        "",
        "",
        "Cargando guión de interfaz - ",
    };

    // 0x100f3afe0
    const void* LocalisedText::MAINLOAD150B[7] = {
        "Loaded interface scripts",
        "Interface-Skripte geladen",
        "Interfaces chargées",
        "Script de interface carregados",
        "",
        "",
        "Guiones de interfaz cargados",
    };

    // 0x100f3b018
    const void* LocalisedText::MAINLOAD160[7] = {
        "Loading additional fonts - ",
        "Lade Zusatzschriftarten - ",
        "Chargement de polices secondaires - ",
        "Carregando fontes adicionais - ",
        "",
        "",
        "Cargando fuentes adicionales - ",
    };

    // 0x100f3b050
    const void* LocalisedText::MAINLOAD160B[7] = {
        "Loaded additional fonts",
        "Zusatzschriftarten geladen",
        "Polices secondaires chargées",
        "Fontes adicionais carregadas",
        "",
        "",
        "Fuentes adicionales cargadas",
    };

    // 0x100f3b088
    const void* LocalisedText::MAINLOAD170[7] = {
        "Loading world map - ",
        "Lade Weltkarte - ",
        "Chargement de la mappemonde - ",
        "Carregando mapa-múndi - ",
        "",
        "",
        "Cargando mapamundi - ",
    };

    // 0x100f3b0c0
    const void* LocalisedText::MAINLOAD170B[7] = {
        "Loaded world map",  "Weltkarte geladen", "Mappemonde chargée", "Mapa-múndi carregado", "", "",
        "Mapamundi cargado",
    };

    // 0x100f3b0f8
    const void* LocalisedText::MAINLOAD180[7] = {
        "Loading world list data",
        "Lade Liste der Welten",
        "Chargement de la liste des serveurs",
        "Carregando dados da lista de mundos",
        "",
        "",
        "Cargando datos de la lista de mundos",
    };

    // 0x100f3b130
    const void* LocalisedText::MAINLOAD180B[7] = {
        "Loaded world list data",
        "Liste der Welten geladen",
        "Liste des serveurs chargée",
        "Dados da lista de mundos carregados",
        "",
        "",
        "Datos de la lista de mundos cargados",
    };

    // 0x100f3b168
    const void* LocalisedText::MAINLOAD190B[7] = {
        "Loaded client variable data",
        "Client-Variablen geladen",
        "Variables du client chargées",
        "As variáveis do sistema foram carregadas",
        "",
        "",
        "Variables de cliente cargadas",
    };

    // 0x100f3b1a0
    const void* LocalisedText::LOADINGDOTDOTDOT[7] = {
        "Loading...", "Lade...", "Chargement en cours...", "Carregando...", "", "", "Cargando...",
    };

    // 0x100f3b1d8
    const void* LocalisedText::SNAPSHOT_PLEASECLOSE1[7] = {
        "Please close the interface you have open before using 'Report Abuse'.",
        "Bitte schließ die momentan geöffnete Benutzeroberfläche,",
        "Fermez l'interface que vous avez ouverte avant d'utiliser le bouton « Signaler un abus ».",
        "Feche a interface aberta antes de usar o recurso \"Denunciar abuso\".",
        "",
        "",
        "Cierra la interfaz que tienes abierta antes de usar el botón 'Denunciar abuso'.",
    };

    // 0x100f3b210
    const void* LocalisedText::SNAPSHOT_PLEASECLOSE2[7] = {
        nullptr, "bevor du die Option 'Regelverstoß melden' benutzt.", nullptr, nullptr, nullptr, nullptr, nullptr,
    };

    // 0x100f3b248
    const void* LocalisedText::SYSTEMUPDATE[7] = {
        "System update in: ",
        "System-Update in: ",
        "Mise à jour système dans : ",
        "Atualização do sistema em: ",
        "",
        "",
        "Actualización del sistema en: ",
    };

    // 0x100f3b280
    const void* LocalisedText::FRIENDLOGIN[7] = {
        " has logged in.", " loggt sich ein.", " s'est connecté.", " entrou no jogo.", "", "", " se ha conectado.",
    };

    // 0x100f3b2b8
    const void* LocalisedText::FRIENDLOGOUT[7] = {
        " has logged out.", " loggt sich aus.", " s'est déconnecté.", " saiu do jogo.", "", "", " se ha desconectado.",
    };

    // 0x100f3b2f0
    const void* LocalisedText::UNABLETOFIND[7] = {
        "Unable to find ",
        "Spieler kann nicht gefunden werden: ",
        "Impossible de trouver ",
        "Não foi possível encontrar ",
        "",
        "",
        "No es posible encontrar a ",
    };

    // 0x100f3b328
    const void* LocalisedText::USE[7] = {
        "Use", "Benutzen", "Utiliser", "Usar", "", "", "Usar",
    };

    // 0x100f3b360
    const void* LocalisedText::EXAMINE[7] = {
        "Examine", "Untersuchen", "Examiner", "Examinar", "", "", "Examinar",
    };

    // 0x100f3b398
    const void* LocalisedText::ATTACK[7] = {
        "Attack", "Angreifen", "Attaquer", "Atacar", "", "", "Atacar",
    };

    // 0x100f3b3d0
    const void* LocalisedText::CHOOSEOPTION[7] = {
        "Choose Option", "Wähl eine Option", "Choisir une option", "Selecionar opção", "", "", "Seleccionar opción",
    };

    // 0x100f3b408
    const void* LocalisedText::MOREOPTIONS[7] = {
        " more options", " weitere Optionen", " autres options", " mais opções", "", "", " más opciones",
    };

    // 0x100f3b440
    const void* LocalisedText::WALKHERE[7] = {
        "Walk here", "Hierhin gehen", "Atteindre", "Caminhar para cá", "", "", "Venir acá",
    };

    // 0x100f3b478
    const void* LocalisedText::FACEHERE[7] = {
        "Face here", "Hierhin drehen", "Regarder dans cette direction", "Virar para cá", "", "", "Girar hacia acá",
    };

    // 0x100f3b4b0
    const void* LocalisedText::LEVEL[7] = {
        "level: ", "Stufe: ", "niveau ", "nível: ", "", "", "nivel: ",
    };

    // 0x100f3b4e8
    const void* LocalisedText::SKILL[7] = {
        "skill: ", "Fertigkeit: ", "compétence ", "habilidade: ", "", "", "habilidad: ",
    };

    // 0x100f3b520
    const void* LocalisedText::RATING[7] = {
        "rating: ", "Kampfstufe: ", "classement ", "qualificação: ", "", "", "clasificación: ",
    };

    // 0x100f3b558
    int32_t LocalisedText::PLEASEWAIT[14] = {
        "Please wait...", "Bitte warte...", "Veuillez attendre", "Aguarde...", "", "", "Por favor, espera...",
    };

    // 0x100f3b590
    const void* LocalisedText::CLOSE[7] = {
        "Close",
        "Bitte schließ die momentan geöffnete Benutzeroberfläche,",
        "Fermez l'interface que vous avez ouverte avant d'utiliser le bouton « Signaler un abus ».",
        "Feche a interface aberta antes de usar o recurso \"Denunciar abuso\".",
        "",
        "",
        "Cierra la interfaz que tienes abierta antes de usar el botón 'Denunciar abuso'.",
    };

    // 0x100f3b5c8
    const void* LocalisedText::MINISEPERATOR[7] = {
        " ", ": ", " ", " ", "", "", " ",
    };

    // 0x100f3b600
    const void* LocalisedText::QUADRILLION[7] = {
        "Q", "Q", "Q", "Q", "", "", "Q",
    };

    // 0x100f3b638
    const void* LocalisedText::QUADRILLION_SHORT[7] = {
        "Q", "Q", "Q", "Q", "", "", "Q",
    };

    // 0x100f3b670
    const void* LocalisedText::TRILLION[7] = {
        "T", "T", "T", "T", "", "", "T",
    };

    // 0x100f3b6a8
    const void* LocalisedText::TRILLION_SHORT[7] = {
        "T", "T", "T", "T", "", "", "T",
    };

    // 0x100f3b6e0
    const void* LocalisedText::BILLION[7] = {
        "B", "B", "B", "B", "", "", "B",
    };

    // 0x100f3b718
    const void* LocalisedText::BILLION_SHORT[7] = {
        "B", "B", "B", "B", "", "", "B",
    };

    // 0x100f3b750
    const void* LocalisedText::MILLION[7] = {
        "M", "M", "M", "M", "", "", "M",
    };

    // 0x100f3b788
    const void* LocalisedText::MILLION_SHORT[7] = {
        "M", "M", "M", "M", "", "", "M",
    };

    // 0x100f3b7c0
    const void* LocalisedText::THOUSAND[7] = {
        "K", "T", "K", "K", "", "", "K",
    };

    // 0x100f3b7f8
    const void* LocalisedText::THOUSAND_SHORT[7] = {
        "K", "T", "K", "K", "", "", "K",
    };

    // 0x100f3b830
    const void* LocalisedText::FROM[7] = {
        "From", "Von:", "De", "De", "", "", "De",
    };

    // 0x100f3b868
    const void* LocalisedText::SELF[7] = {
        "Self", "Mich", "Moi", "Eu", "", "", "Mí",
    };

    // 0x100f3b8a0
    const void* LocalisedText::FRIENDLISTDUPE[7] = {
        " is already on your friends list.",
        " steht bereits auf deiner Freunde-Liste!",
        " est déjà dans votre liste d'amis.",
        " já está na sua lista de amigos.",
        "",
        "",
        " ya está en tu lista de amigos.",
    };

    // 0x100f3b8d8
    int32_t LocalisedText::IGNORELISTFULL_MEMBERS[14] = {
        "Your ignore list is full. Max of 400 users.",
        "Deine Ignorieren-Liste ist voll, du kannst nur 400 Spieler darauf eintragen.",
        "Votre liste noire est pleine (400 noms maximum).",
        "Sua lista de ignorados está cheia. O limite é de 400 usuários.",
        "",
        "",
        "Tu lista de jugadores ignorados está llena, el límite es de 400.",
    };

    // 0x100f3b910
    int32_t LocalisedText::IGNORELISTFULL_FREE[14] = {
        "Your ignore list is full. Max of 100 users.",
        "Deine Ignorieren-Liste ist voll, du kannst nur 100 Spieler darauf eintragen.",
        "Votre liste noire est pleine (100 noms maximum).",
        "Sua lista de ignorados está cheia. O limite é de 100 usuários.",
        "",
        "",
        "Tu lista de jugadores ignorados está llena, el límite es de 100.",
    };

    // 0x100f3b948
    const void* LocalisedText::IGNORELISTDUPE[7] = {
        " is already on your ignore list.",
        " steht bereits auf deiner Ignorieren-Liste!",
        " est déjà dans votre liste noire.",
        " já está na sua lista de ignorados.",
        "",
        "",
        " ya está en tu lista de ignorados.",
    };

    // 0x100f3b980
    const void* LocalisedText::FRIENDCANTADDSELF[7] = {
        "You can't add yourself to your own friends list.",
        "Du kannst dich nicht auf deine eigene Freunde-Liste setzen!",
        "Vous ne pouvez pas ajouter votre nom à votre liste d'amis.",
        "Você não pode adicionar a si próprio à sua lista de amigos.",
        "",
        "",
        "No puedes añadirte a tu propia lista de amigos.",
    };

    // 0x100f3b9b8
    const void* LocalisedText::IGNORECANTADDSELF[7] = {
        "You can't add yourself to your own ignore list.",
        "Du kannst dich nicht auf deine eigene Ignorieren-Liste setzen!",
        "Vous ne pouvez pas ajouter votre nom à votre liste noire.",
        "Você não pode adicionar a si próprio à sua lista de ignorados.",
        "",
        "",
        "No puedes añadirte a tu propia lista de ignorados.",
    };

    // 0x100f3b9f0
    const void* LocalisedText::FRIENDLIST_TIMED_SAVE[7] = {
        "Changes will take effect on your friends chat in the next 60 seconds.",
        "Die Änderungen am Freundes-Chat werden innerhalb von 60 Sekunden übernommen.",
        "Les modifications seront apportés à votre canal de discussion dans les 60 prochaines secondes.",
        "As mudanças acontecerão em seu bate-papo entre amigos nos próximos 60 segundos.",
        "",
        "",
        "Los cambios en tu chat de amigos se realizarán en los próximos 60 segundos.",
    };

    // 0x100f3ba28
    const void* LocalisedText::REMOVEIGNORE1[7] = {
        "Please remove ",     "Bitte entferne ", "Veuillez commencer par supprimer ", "Remova ", "", "",
        "Elimina primero a ",
    };

    // 0x100f3ba60
    const void* LocalisedText::REMOVEIGNORE2[7] = {
        " from your ignore list first.",
        " zuerst von deiner Ignorieren-Liste!",
        " de votre liste noire.",
        " da sua lista de ignorados primeiro.",
        "",
        "",
        " de tu lista de ignorados.",
    };

    // 0x100f3ba98
    const void* LocalisedText::REMOVEFRIEND1[7] = {
        "Please remove ",     "Bitte entferne ", "Veuillez commencer par supprimer ", "Remova ", "", "",
        "Elimina primero a ",
    };

    // 0x100f3bad0
    const void* LocalisedText::REMOVEFRIEND2[7] = {
        " from your friends list first.",
        " zuerst von deiner Freunde-Liste!",
        " de votre liste d'amis.",
        " da sua lista de amigos primeiro.",
        "",
        "",
        " de tu lista de amigos.",
    };

    // 0x100f3bb08
    const void* LocalisedText::CHATCOL[84] = {
        "yellow:", "gelb:",      "jaune:",       "amarelo:",  "", "", "amarillo:",
        "red:",    "rot:",       "rouge:",       "vermelho:", "", "", "rojo:",
        "green:",  "grün:",      "vert:",        "verde:",    "", "", "verde:",
        "cyan:",   "blaugrün:",  "cyan:",        "ciano:",    "", "", "cian:",
        "purple:", "lila:",      "violet:",      "roxo:",     "", "", "violeta:",
        "white:",  "weiss:",     "blanc:",       "branco:",   "", "", "blanco:",
        "flash1:", "blinken1:",  "clignotant1:", "flash1:",   "", "", "parpadeante1:",
        "flash2:", "blinken2:",  "clignotant2:", "flash2:",   "", "", "parpadeante2:",
        "flash3:", "blinken3:",  "clignotant3:", "flash3:",   "", "", "parpadeante3:",
        "glow1:",  "leuchten1:", "brillant1:",   "brilho1:",  "", "", "brillante1:",
        "glow2:",  "leuchten2:", "brillant2:",   "brilho2:",  "", "", "brillante2:",
        "glow3:",  "leuchten3:", "brillant3:",   "brilho3:",  "", "", "brillante3:",
    };

    // 0x100f3bda8
    const void* LocalisedText::CHATEFFECT[35] = {
        "wave:",   "welle:",     "ondulation:",  "onda:",         "", "", "onda:",
        "wave2:",  "welle2:",    "ondulation2:", "onda2:",        "", "", "onda2:",
        "shake:",  "schütteln:", "tremblement:", "tremor:",       "", "", "temblor:",
        "scroll:", "scrollen:",  "déroulement:", "rolagem:",      "", "", "desplazar:",
        "slide:",  "gleiten:",   "glissement:",  "deslizamento:", "", "", "deslizar:",
    };

    // 0x100f3bec0
    const void* LocalisedText::UNKNOWN_FRIEND_DISPLAYNAME_PLACEHOLDER[7] = {
        "Friend", "Freund", "Ami", "Amigo", "", "", "Amigo",
    };

    // 0x100f3bef8
    int32_t LocalisedText::CLAN_CHAT_TALK_TOO_LOW_RANK[14] = {
        "Your rank is not high enough to talk in Clan Chat.",
        "Dein Rang ist nicht hoch genug, um im Clanchat mitzureden.",
        "Votre rang n'est pas assez élevé pour parler dans la discussion de clan.",
        "Seu ranque não é alto o suficiente para falar no bate-papo do clã.",
        "",
        "",
        "No tienes el rango suficiente para poder hablar en el chat de clan.",
    };

    // 0x100f3bf30
    const void* LocalisedText::CLAN_CHAT_UNKNOWN_NAME1[7] = {
        "Cannot find ", "", "Impossible de trouver ", "Não é possível encontrar ", "", "", "No se puede encontrar a ",
    };

    // 0x100f3bf68
    const void* LocalisedText::CLAN_CHAT_UNKNOWN_NAME2[7] = {
        " in Clan Chat.",
        " wurde nicht im Clanchat gefunden.",
        " dans la discussion de clan.",
        " no bate-papo do clã.",
        "",
        "",
        " en el chat de clan.",
    };

    // 0x100f3bfa0
    const void* LocalisedText::KICK_BUSY[7] = {
        "Unable to kick - system busy.",
        "Hinauswerfen nicht möglich - System ausgelastet.",
        "Exclusion impossible - système occupé.",
        "Não é possível expulsar - sistema ocupado.",
        "",
        "",
        "No se puede expulsar. El sistema está ocupado.",
    };

    // 0x100f3bfd8
    const void* LocalisedText::KICK_SELF_FAIL[7] = {
        "You cannot kick yourself.",
        "Du kannst dich nicht selbst hinauswerfen.",
        "Vous ne pouvez pas vous exclure.",
        "Você não pode se expulsar.",
        "",
        "",
        "No puedes expulsarte a ti mismo.",
    };

    // 0x100f3c010
    const void* LocalisedText::CAN_ONLY_BAN_GUESTS[7] = {
        "You can only temporarily ban guests. A Clan Admin can remove your clanmate.",
        "Gäste kannst du nur vorübergehend sperren. Nur ein Clan-Admin kann deinen Clanangehörigen rauswerfen.",
        "Vous ne pouvez exclure les invités que temporairement. Un admin. de clan peut exclure définitivement ce "
        "joueur.",
        "Você só pode suspender visitantes temporariamente. Um administrador do clã pode remover seu colega de clã.",
        "",
        "",
        "Solo puedes bloquear invitados temporalmente. Un administrador de clan puede expulsar a tu compañero de clan.",
    };

    // 0x100f3c048
    const void* LocalisedText::AUTO_CONFIG[7] = {
        "Running Auto-Configuration...",
        "Ausführen von Auto-Konfiguration...",
        "Exécution Auto-Configuration...",
        "Executando Auto-Configuration...",
        "",
        "",
        "Haciendo Auto-Configuración...",
    };

    // 0x100f3c080
    const void* LocalisedText::COMPATIBILITY_MODE[7] = {
        "Compatibility Mode",     "Kompatibilitätsmodus", "Mode de compatibilité", "Modo de Compatibilidade", "", "",
        "Modo de compatibilidad",
    };

    // 0x1004b8f70
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1004b8fd0
    void ___cxx_global_var_init_3(void) {
        new ((ColourHSL*)&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1004b8ff0
    void ___cxx_global_var_init_5(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1004b9050
    void ___cxx_global_var_init_7(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1004b90b0
    void ___cxx_global_var_init_9(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1004b9110
    void ___cxx_global_var_init_874(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004b9150
    void ___cxx_global_var_init_875(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004b9190
    void ___cxx_global_var_init_876(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b91d0
    void ___cxx_global_var_init_877(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9210
    void ___cxx_global_var_init_878(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004b9240
    void ___cxx_global_var_init_879(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9280
    void ___cxx_global_var_init_880(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004b92c0
    void ___cxx_global_var_init_881(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9300
    void ___cxx_global_var_init_882(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9340
    void ___cxx_global_var_init_883(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9380
    void ___cxx_global_var_init_884(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b93c0
    void ___cxx_global_var_init_885(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9400
    void ___cxx_global_var_init_886(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9440
    void ___cxx_global_var_init_887(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9480
    void ___cxx_global_var_init_888(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004b94c0
    void ___cxx_global_var_init_889(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004b9520
    void ___cxx_global_var_init_890(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9560
    void ___cxx_global_var_init_891(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1004b95c0
    void ___cxx_global_var_init_892(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9600
    void ___cxx_global_var_init_893(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b9640
    void ___cxx_global_var_init_894(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1004b9680
    void ___cxx_global_var_init_895(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004b96c0
    void __GLOBAL__sub_I_unity_30_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_3();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::game

namespace jag::graphics {
    // 0x10422aea0
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422aee0
    uint8_t WORLD_ORTHOGONAL[16];

} // namespace jag::graphics
