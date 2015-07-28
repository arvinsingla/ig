/**
 * Render the event display.
 */
var app = angular.module('eventApp', [])
    .controller('eventController', function($scope) {
        $scope.title = Drupal.settings.igEventDisplay.title;
    });