
class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class ace_attributes {
                class Attributes {
                    class ace_isPilot {
                        displayName = CSTRING(IsPilot_DisplayName);
                        tooltip = CSTRING(IsPilot_Description);
                        property = QUOTE(ace_IsPilot);
                        control = "Checkbox";
                        expression = QUOTE(if (_value) then {_this setVariable [ARR_3('ACE_GForceCoef',G_COEF_PILOT,true)]});
                        defaultValue = "false";
                        condition = "objectBrain";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
