 - `RULE-1-2` - `LanguageExtensionsShouldNotBeUsed.ql`:
   - Improve reporting by describing which language extensions are used.
   - Improve reporting by aggregating results generated from a macro expansion at the generating macro location.
   - Reduce false positives for the variable length array check by permitting those extensions which are included in the C99 standard.