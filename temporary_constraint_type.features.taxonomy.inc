<?php
/**
 * @file
 * temporary_constraint_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function temporary_constraint_type_taxonomy_default_vocabularies() {
  return array(
    'temporary_constraint_type' => array(
      'name' => 'Temporary constraint type',
      'machine_name' => 'temporary_constraint_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
