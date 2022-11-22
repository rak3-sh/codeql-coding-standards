//** THIS FILE IS AUTOGENERATED, DO NOT MODIFY DIRECTLY.  **/
import cpp
import RuleMetadata
import codingstandards.cpp.exclusions.RuleMetadata

newtype Declarations5Query = TExternalObjectOrFunctionNotDeclaredInOneFileQuery()

predicate isDeclarations5QueryMetadata(Query query, string queryId, string ruleId) {
  query =
    // `Query` instance for the `externalObjectOrFunctionNotDeclaredInOneFile` query
    Declarations5Package::externalObjectOrFunctionNotDeclaredInOneFileQuery() and
  queryId =
    // `@id` for the `externalObjectOrFunctionNotDeclaredInOneFile` query
    "c/misra/external-object-or-function-not-declared-in-one-file" and
  ruleId = "RULE-8-5"
}

module Declarations5Package {
  Query externalObjectOrFunctionNotDeclaredInOneFileQuery() {
    //autogenerate `Query` type
    result =
      // `Query` type for `externalObjectOrFunctionNotDeclaredInOneFile` query
      TQueryC(TDeclarations5PackageQuery(TExternalObjectOrFunctionNotDeclaredInOneFileQuery()))
  }
}
