/*
Made by Anthony Jiawan. 
Please include credits if shared.
Gorilla-Gaming.com 2016
*/

case CHAT_MSG_OFFICER:
		{
			char message[1024];
			switch (GetPlayer()->GetSession()->GetSecurity())
			{
			case SEC_PLAYER:
				if (GetPlayer()->GetTeam()==ALLIANCE) {
                snprintf(message, 1024, "|cff33CC00FROZEN |cff05B8CC[Alliance]|cff05B8CC[%s]:|cffffffff %s", GetPlayer()->GetName().c_str(), msg.c_str());
                }
                if (GetPlayer()->GetTeam()==HORDE) {
                snprintf(message, 1024, "|cffDC143C[Horde]|cffDC143C[%s]:|cffffffff %s", GetPlayer()->GetName().c_str(), msg.c_str());
                }
                break;
			case SEC_VIP:
				snprintf(message, 1024, "cff33CC00FROZEN |cffEEA9B8[VIP]|cffA1A1A1[%s]:|cffffffff %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_EM:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cff00ffff[Event Master]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_MODERATOR:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cff00ffff[Trail GM]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_GAMEMASTER:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cff00ffff[GM]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_ADMINISTRATOR:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cff00ffff[Admin]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_DEV:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cff00ffff[Developer]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_HD:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cffff0000[Head Developer]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_HA:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cffff0000[Head Admin]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_CO:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cffff0000[Co Owner]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;
				
			case SEC_O:
				snprintf(message, 1024, "|cff33CC00FROZEN |TInterface\\ChatFrame\\UI-ChatIcon-Blizz.blp:0:2:0:-3|t |cffff0000[Owner]|cff00CCEE[%s]:|cffFFFF00 %s", GetPlayer()->GetName().c_str(), msg.c_str());
				}
				break;